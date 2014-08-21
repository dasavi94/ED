template <class T>
class Lista{

	public:
		Lista(){};
		Lista(const Lista & l);
		~Lista(){};
		Lista & operator= (const Lista & l);

		void set(int pos,T a);
		T get (int pos) const;
		void Insertar(int pos, T a);
		void Borrar(int pos);
		int size() const;
};

/*
//Implementación sugerida por el libro
class Posicion{
	public:
		Posicion();
		Posicion(const Posicion &p);
		~Posicion();
		Posicion &operator= (const Posicion &p);
		Posicion &operator++();
		Posicion &operator--();
		bool operator==(const Posicion &p);
		bool operator!=(const Posicion &p);
};
template <class T>
class Lista{

	public:
		Lista(){};
		Lista(const Lista & l);
		~Lista(){};
		Lista & operator= (const Lista & l);

		void set(Posicion pos,T a);
		T get (Posicion pos) const;
		Posicion Insertar(Posicion pos, T a);
		Posicion Borrar(Posicion pos);
		int size() const;

		bool vacia();
		Posicion Begin() const;
		Posicion End() const;
};
template <class T>
bool Lista<T>::vacia(){

	if (Begin()==End()) return true;
	return false;
}
template <class T>
int Lista<T>::NumeroElementos(){
	int i=0;
	for(Posicion p=begin();p!=End();++p)
		i++;
	return i;
}*/
