#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

#include <iostream>
template <class T>
class VectorDinamico{

	private:
		T *datos;
		int tamanio;
	public:
		VectorDinamico(int n);
		VectorDinamico(const VectorDinamico &original);
		~VectorDinamico();
		int size();
		T get(int i) const;
		void set(int i,T v);
		void resize(int n);
		VectorDinamico<T> &operator=(const VectorDinamico &original);
	private:
		void reservarMemoria(int n);
		void destruirMemoria();
};
#endif
