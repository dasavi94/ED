#include "bintree.cpp"
using namespace std;

int main()
{
    Arbol<int> a;
    int c=5;
    a.insertar(c);
    a.insertar(6);
    a.insertar(15);
    a.insertar(3);
    a.insertar(2);
    //a.mostrar();
    Arbol<int>::Iterator it;

    for(it=a.begin();it!=a.end();++it)
        cout<<*it<<endl;
    cout<<*a.end()<<endl;
    a.borrar(15);
    Arbol<int>::Iterator az;
    for(az=a.begin();az!=a.end();++az){
        cout<<*az<<endl;
    }

    cout<<*a.end()<<endl;

        return 0;
}
