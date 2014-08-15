#include "matriz.cpp"

using namespace std;

int main()
{
	Matriz prueba,prueba1,res;
	CrearMatriz(prueba,5,5);
	CrearMatriz(prueba1,5,5);
	CrearMatriz(res,5,5);


	//double a=0;
	for(int i=0;i<FilasMatriz(prueba);i++)
		for(int j=0;j<columnasMatriz(prueba);j++){
			//Introducir manualmente
			//cout<<"Introduzca dato en ["<<i<<"]["<<j<<"]"<<endl;
			//cin>>a;
			SetMatriz(prueba,i,j,i);
			SetMatriz(prueba1,i,j,j);
		}
	mostrarMatriz(prueba);
	mostrarMatriz(prueba1);

	SumarMatriz(res,prueba,prueba1);	
	mostrarMatriz(res);
	
	RestarMatriz(res,prueba,prueba1);
	mostrarMatriz(res);

	DestruirMatriz(prueba);
	DestruirMatriz(prueba1);
	DestruirMatriz(res);
			


}
