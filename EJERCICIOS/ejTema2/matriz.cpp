/**************Dado el dato MATRIZ*****************
**IMPLEMENTAR LAS FUNCIONES:***********************
**-void CrearMatriz(Matriz &m,int f,int c)*********
**-int FilasMatriz(const Matriz &m)****************
**-int columnasMatriz(const Matriz &m)*************
**-void SetMatriz(Matriz &m,int i,int j,double v)**
**-double GetMatriz(const Matriz &m,int i,int j)***
**-void DestruirMatriz(Matriz &m)******************
***************************************************/
//Definimos nuevo tipo de dato llamado MATRIZ
#include<iostream>
using namespace std;
struct Matriz{
	double **datos;
	int filas,columnas;
};
//**************************FUNCIONES******************************//
//Definimos una nueva función para crear la matriz dinamica a partir de un numero de filas y un numero de columnas
void CrearMatriz(Matriz &m,int f,int c)
{
	m.datos= new double *[f];
	for (int i=0;i<f;i++)
		m.datos[i]=new double [c];
	m.filas=f;
	m.columnas=c;

}
//Nos devuelve el numero de filas de la matriz
int FilasMatriz(const Matriz &m){

	return m.filas;
}
//Nos devuelve el numero de columnas de la matriz
int columnasMatriz(const Matriz &m)
{
	return m.columnas;
}
//Introducimos un dato en la posicion [i][j] de la matriz
void SetMatriz(Matriz &m,int i,int j,double v)
{
	m.datos[i][j]=v;
}
//Conseguimos el dato [i][j] de la matriz
double GetMatriz(const Matriz &m,int i,int j)
{
	return m.datos[i][j];
}
//Liberamos la memoria de la matriz
void DestruirMatriz(Matriz &m)
{
	for (int i =0;i<m.filas;i++)
		delete [] m.datos[i] ;
	delete [] m.datos;
}
//**************************FUNCIONES EJ2 en base a las funciones anteriores******************************//
void SumarMatriz(Matriz &res,const Matriz &m1,const Matriz &m2)
{
	double comodin=0;
	for(int i=0;i<FilasMatriz(m1);i++)
		for(int j=0;j<columnasMatriz(m1);j++){
			comodin=GetMatriz(m1,i,j)+GetMatriz(m2,i,j);
			SetMatriz(res,i,j,comodin);
		}

			
}
void RestarMatriz(Matriz &res,const Matriz &m1,const Matriz &m2)
{
	double comodin=0;
	for(int i=0;i<FilasMatriz(m1);i++)
		for(int j=0;j<columnasMatriz(m1);j++)
		{
			comodin=GetMatriz(m1,i,j)-GetMatriz(m2,i,j);
			SetMatriz(res,i,j,comodin);
		}
}
void MultiplicarMatriz(Matriz &res,const Matriz &m1,const Matriz &m2)
{

	double comodin;	
	for(int i=0;i<FilasMatriz(m1);i++)
		for(int j=0;j<columnasMatriz(m2);j++){
			comodin=0;
			for(int k=0;k<columnasMatriz(m1);k++){
				comodin=GetMatriz(res,i,j)+GetMatriz(m1,i,k)*GetMatriz(m2,k,j);	
				SetMatriz(res,i,j,comodin);
			}
		}
	
}
void Transpuesta(Matriz &res,const Matriz &m)
{
	for(int i=0;i<FilasMatriz(m);i++)
		for(int j=0;j<columnasMatriz(m);j++)
			SetMatriz(res,i,j,GetMatriz(m,j,i));
}
//**************************FUNCION MOSTRAR MATRIZ******************************//
//Aunque no se pida, añadida por comodidad
void mostrarMatriz(const Matriz &m)
{

	cout<<"----------------------------------------------------"<<endl;
	for(int i=0;i<FilasMatriz(m);i++){
		for(int j=0;j<columnasMatriz(m);j++){
			cout<<"["<<GetMatriz(m,i,j)<<"]";
		}
		cout<<endl;
	}	
}
