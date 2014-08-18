#include "VectorDinamico.h"
template <class T>
VectorDinamico<T>::VectorDinamico(int n)
{
	reservarMemoria(n);
}
template <class T>
VectorDinamico<T>::~VectorDinamico(){

	destruirMemoria();
}
template <class T>
int VectorDinamico<T>::size(){
	return tamanio;
}
template <class T>
T VectorDinamico<T>::get(int i) const{

	if(i<=tamanio)
		return datos[i];

}
template <class T>
void VectorDinamico<T>::set(int i,T v){

	if(i<=tamanio)
		datos[i]=v;
}
template <class T>
void VectorDinamico<T>::resize(int n){

	
		T *comodin=new T[n];
			if(n>tamanio) for(int i=0;i<tamanio;i++) comodin[i]=datos[i];
			if(n<tamanio) for(int i=0;i<n;i++) comodin[i]=datos[i];
		destruirMemoria();
		reservarMemoria(n);
		datos=comodin;

}
template <class T>
VectorDinamico<T> & VectorDinamico<T>::operator=(const VectorDinamico<T> &original)
{
	resize(original.tamanio);
	for(int i=0;i<original.tamanio;i++){
		datos[i]=original.datos[i];
	}
	return *this;
}
//<-------------------__FUNCIONES PRIVADAS__---------------------->
template <class T>
void VectorDinamico<T>::reservarMemoria(int n){
	datos=new T [n];
	tamanio=n;
}
template <class T>
void VectorDinamico<T>::destruirMemoria()
{
	delete [] datos;
}
