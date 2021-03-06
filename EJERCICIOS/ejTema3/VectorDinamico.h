#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

#include <iostream>
class VectorDinamico{

	private:
		float *datos;
		int tamanio;
	public:
		VectorDinamico();
		VectorDinamico(int n);
		VectorDinamico(const VectorDinamico &original);
		~VectorDinamico();
		int size();
		float get(int i) const;
		void set(int i,float v);
		void resize(int n);
		VectorDinamico &operator=(const VectorDinamico &original);
	private:
		void reservarMemoria(int n);
		void destruirMemoria();
};
#endif
