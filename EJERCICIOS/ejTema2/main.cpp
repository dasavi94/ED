#include "matriz.cpp"

using namespace std;

int main()
{
	Matriz prueba,prueba1,res,res1;
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

	//Sumamos prueba+prueba1
	SumarMatriz(res,prueba,prueba1);	
	mostrarMatriz(res);
	
	//Restamos prueba-prueba1
	RestarMatriz(res,prueba,prueba1);
	mostrarMatriz(res);

	//Si las matrices que se multiplican son de tamaño distinto, hay que inicializar correctamente la matriz res1	
	CrearMatriz(res1,FilasMatriz(prueba),columnasMatriz(prueba1));
	//Multiplicamos prueba*prueba1
	MultiplicarMatriz(res1,prueba,prueba1);
	mostrarMatriz(res1);
	
	//Hacemos la transpuesta de res
	Transpuesta(res1,res);
	mostrarMatriz(res1);

	//Liberamos memoria de todas las matrices
	DestruirMatriz(prueba);
	DestruirMatriz(prueba1);
	DestruirMatriz(res);
	DestruirMatriz(res1);
			


}
