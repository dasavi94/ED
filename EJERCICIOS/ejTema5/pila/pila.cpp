
#include <iostream>

using namespace std;

template <class T>
class Pila{

	private:
		T *datos;
		T nullp;

		int tamanio;
		int ocupados;
	public:
		Pila();
		Pila(int n);
		Pila(const Pila &p);
		~Pila();
		bool vacia() const;
		void push (const T &d);
		void del ();
		T get () ;
		T getNull();
		int getTamanio();
		int getOcupados();
	private:
		void reservarMemoria(int n);
		void quitarMemoria();
		void resize(int n);
};
//<--------------------------METODOS PÚBLICOS----------------------------->
template <class T>
Pila<T>::Pila(){
	reservarMemoria(1);
	ocupados=0;
}
template <class T>
Pila<T>::Pila(int n){
	reservarMemoria(n);
	ocupados=0;
}
template <class T>
Pila<T>::~Pila(){
	quitarMemoria();
}
template <class T>
bool Pila<T>::vacia() const{
	return ocupados==0 ? true : false;
}
template <class T>
void Pila<T>::push(const T &d){

	if (ocupados+1>=tamanio){
		resize(tamanio*2);

	}
	//cout<<"introducimos los datos en el array, y el tamaño del array es="<<tamanio<<" -->y el ocupado="<<ocupados<<endl;

	datos[ocupados]=d;
	ocupados++;
	//cout<<"Introducido el dato:"<<d<<"<<"<<ocupados<<"<<"<<tamanio<<"xi:  "<<datos[ocupados-1]<<endl;
}
template <class T>
void Pila<T>::del(){

	datos[ocupados]=nullp;
	ocupados--;
}
template <class T>
T Pila<T>::get() {
	T d=datos[ocupados-1];
	del();
	return d;	
}
template <class T>
T Pila<T>::getNull(){
	return nullp;
}
template <class T>
int Pila<T>::getTamanio(){
	return tamanio;
}
template <class T>
int Pila<T>::getOcupados(){
	return ocupados;
}
//<-------------------------METODOS PRIVADOS------------------------------>
template <class T>
void Pila<T>::resize(int n){
		T *comodin;
		comodin=new T [ocupados];

		for(int i=0;i<ocupados;i++)
			comodin[i]=datos[i];

		quitarMemoria();

		reservarMemoria(n);

		for (int i=0;i<ocupados;i++)
			datos[i]=comodin[i];
}
template <class T>
void Pila<T>::reservarMemoria(int n){
	datos=new T [n];
	tamanio=n;
}
template <class T>
void Pila<T>::quitarMemoria(){

	delete [] datos;
	//delete [] datos;
}
