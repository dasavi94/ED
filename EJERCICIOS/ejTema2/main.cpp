#include "matriz.cpp"
#include <iostream>

using namespace std;

int main()
{
	Matriz prueba;
	CrearMatriz(prueba,5,5);

	cout<<"Numero de filas:"<<FilasMatriz(prueba)<<endl;
	cout<<"Numero de columnas:"<<columnasMatriz(prueba)<<endl;

	double a=0;
	for(int i=0;i<FilasMatriz(prueba);i++)
		for(int j=0;j<columnasMatriz(prueba);j++){
			cout<<"Introduzca dato en ["<<i<<"]["<<j<<"]"<<endl;
			cin>>a;
			SetMatriz(prueba,i,j,a);
		}
	for(int i=0;i<FilasMatriz(prueba);i++){
		for(int j=0;j<columnasMatriz(prueba);j++){
			cout<<"["<<GetMatriz(prueba,i,j)<<"]";
		}
		cout<<endl;
	}
	DestruirMatriz(prueba);
			


}
