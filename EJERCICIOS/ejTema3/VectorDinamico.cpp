#include "VectorDinamico.h"
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

	if(n>tamanio){
		float *comodin=new float[n];
		for(int i=0;i<tamanio;i++)
			comodin[i]=datos[i];
		destruirMemoria();
		reservarMemoria(n);
		datos=comodin;
		}
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
