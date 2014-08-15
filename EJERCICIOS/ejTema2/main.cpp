#include "matriz.cpp"
#include <iostream>

using namespace std;

int main()
{
	Matriz prueba,prueba1,res;
	CrearMatriz(prueba,5,5);
	CrearMatriz(prueba1,5,5);
	CrearMatriz(res,5,5);

	cout<<"Numero de filas:"<<FilasMatriz(prueba)<<endl;
	cout<<"Numero de columnas:"<<columnasMatriz(prueba)<<endl;

	double a=0;
	for(int i=0;i<FilasMatriz(prueba);i++)
		for(int j=0;j<columnasMatriz(prueba);j++){
			//cout<<"Introduzca dato en ["<<i<<"]["<<j<<"]"<<endl;
			//cin>>a;
			SetMatriz(prueba,i,j,i);
			SetMatriz(prueba1,i,j,j);
		}
	for(int i=0;i<FilasMatriz(prueba);i++){
		for(int j=0;j<columnasMatriz(prueba);j++){
			cout<<"["<<GetMatriz(prueba,i,j)<<"]";
		}
		cout<<endl;
	}
	SumarMatriz(res,prueba,prueba1);
	
	for(int i=0;i<FilasMatriz(res);i++){
		for(int j=0;j<columnasMatriz(res);j++){
			cout<<"["<<GetMatriz(res,i,j)<<"]";
		}
		cout<<endl;
	}
	DestruirMatriz(prueba);
			


}
