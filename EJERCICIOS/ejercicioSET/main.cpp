#include <iostream>
#include <set>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;
//Función para contar cuantos elementos hay entre a y b
template<typename T>
int contar(const set<T> & s, const T &a, const T & b)
{
    typename set<T>::iterator itt;
    bool encontrado=false;
    int distancia=0;
    for(itt=s.begin();itt!=s.end();itt++)
    {
        if((*itt==a || *itt==b) && encontrado==false){
            encontrado=true;
        }
       else if(encontrado && *itt!=a && *itt!=b)
            distancia++;
        else if (encontrado && *itt==a || *itt==b){
            distancia++;
            return distancia;
    }
}

    return -1;
}
//función para diferencia entre conjuntos
template <typename T>
void diferencia(const set<T> & S1, const set<T> & S2)
{
    set<T> aux;
    typename set<T>::const_iterator S1IT,S2IT,AUXIT,auxito;
    bool fuera=false;
    auxito=S2.begin();
    for(S1IT=S1.begin();S1IT!=S1.end();S1IT++)
    {
        for(S2IT=auxito;S2IT!=S2.end();S2IT++){
            if(*S2IT==*S1IT){
                fuera=true;
                auxito=S2IT;
                break;
            }
            }
        if(fuera!=true)
            aux.insert(*S1IT);
        fuera=false;

    }
    for(AUXIT=aux.begin();AUXIT!=aux.end();AUXIT++)
        cout<<"DIGITO DE LA DIFERENCIA->"<<*AUXIT<<endl;
    cout<<"TAMAÑO AUX-->"<<aux.size()<<endl;
}
//devuelve la intersección de dos conjuntos
template <typename T>
set<T> interseccion(const set<T> & a, const set<T> & b)
{
    typename set<T>::const_iterator ait,bit,auxito;
    set<T> aux;
    auxito=b.begin();
    for(ait=a.begin();ait!=a.end();ait++)
        for(bit=auxito;bit!=b.end();bit++){
            if(*bit==*ait){
                aux.insert(*bit);
                auxito=bit;
                break;
            }
        }
    return aux;


}
int main()
{
    //EJ 1
    srand(time(NULL));
    string cadena="abcdefghijklmnopqrstuvwxyz";
    set<char> X;
    cout<<"PRIMER DIGITO->"<<cadena[7]<<endl;
    cout<<"SEGUNDO DIGITO->"<<cadena[23]<<endl;
    for(int i=0;i<15;i++){
        X.insert(cadena[rand() % cadena.size()]);
    }

    set<char>::iterator it;
    for(it=X.begin();it!=X.end();it++)
        cout<<*it<<endl;
    cout<<"DISTANCIA ENTRE AMBOS-->"<<contar(X,'h','x')<<endl;
    //FIN EJ1
    //EJ 2
    set<int> A;
    set<int> B;
    set<int>::iterator AIT,BIT;

    for(int i=0;i<10;i++){
        A.insert(rand() % 40);
        B.insert(rand() % 40);
    }
    for(AIT=A.begin();AIT!=A.end();AIT++)
        cout<<"DIGITO DE A->"<<*AIT<<endl;
    cout<<"TAMAÑO A-->"<<A.size()<<endl;
    for(BIT=B.begin();BIT!=B.end();BIT++)
        cout<<"DIGITO DE B->"<<*BIT<<endl;
    cout<<"TAMAÑO B-->"<<B.size()<<endl;
    diferencia(A,B);
        //FIN EJ2
        //EJ 3
    set<int> inter=interseccion(A,B);

    set<int>::iterator inte;
        for(inte=inter.begin();inte!=inter.end();inte++)
            cout<<"DIGITO DE INTERSECCION->"<<*inte<<endl;
        //Fin ej3


}
