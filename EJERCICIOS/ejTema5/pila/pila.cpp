
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
		T get () const;
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
}
template <class T>
Pila<T>::Pila(int n){
	reservarMemoria(n);
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

	if (ocupados+1==tamanio){
		T *comodin;
		comodin=new T [ocupados];
		for(int i=0;i<ocupados;i++)
			comodin[i]=datos[i];
		//cout<<"Vamos con la reserva en el push:"<<d<<endl;
		resize(tamanio*2);
		
		int com1=tamanio;
		int com2=ocupados;

		//cout<<"Reservada"<<endl;
		datos=comodin;
		//cout<<"Ponemos los datos en el array"<<endl;
		ocupados=com2;
		//cout<<"ponemos ocupados bien bien"<<endl;
	}
	//cout<<"introducimos los datos en el array, y el tamaño del array es="<<tamanio<<" -->y el ocupado="<<ocupados<<endl;
	datos[ocupados]=d;
	ocupados++;
	//cout<<"Introducido el dato:"<<d<<"<<"<<ocupados<<"<<"<<tamanio<<endl;
}
template <class T>
void Pila<T>::del(){

	datos[ocupados]=nullp;
	ocupados--;
}
template <class T>
T Pila<T>::get() const {
	return datos[ocupados];	
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
	reservarMemoria(n);
}
template <class T>
void Pila<T>::reservarMemoria(int n){
	datos=new T [n];
	tamanio=n;
	ocupados=0;
}
template <class T>
void Pila<T>::quitarMemoria(){

	delete [] datos;
	//delete [] datos;
}