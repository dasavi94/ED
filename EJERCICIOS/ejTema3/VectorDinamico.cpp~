#include "VectorDinamico.h"
using namespace std;
VectorDinamico::VectorDinamico(){

	reservarMemoria(1);
}
VectorDinamico::VectorDinamico(int n)
{
	reservarMemoria(n);
}
VectorDinamico::~VectorDinamico(){

	destruirMemoria();
}
int VectorDinamico::size(){
	return tamanio;
}
float VectorDinamico::get(int i) const{

	if(i<=tamanio)
		return datos[i];

}
void VectorDinamico::set(int i,float v){

	if(i<=tamanio)
		datos[i]=v;
}
void VectorDinamico::resize(int n){

	
		float *comodin=new float[n];
			if(n>tamanio) for(int i=0;i<tamanio;i++) comodin[i]=datos[i];
			if(n<tamanio) for(int i=0;i<n;i++) comodin[i]=datos[i];
		destruirMemoria();
		reservarMemoria(n);
		datos=comodin;

}
VectorDinamico & VectorDinamico::operator=(const VectorDinamico &original)
{
	resize(original.tamanio);
	for(int i=0;i<original.tamanio;i++){
		datos[i]=original.datos[i];
	}
	return *this;
}
//<-------------------__FUNCIONES PRIVADAS__---------------------->
void VectorDinamico::reservarMemoria(int n){
	datos=new float [n];
	tamanio=n;
}
void VectorDinamico::destruirMemoria()
{
	delete [] datos;
}
