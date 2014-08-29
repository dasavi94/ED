#include<iostream>
using namespace std;
template <typename T>
class Arbol
{
public:

    Arbol();
    Arbol(const T& e);
    void insertar( T c);
    void mostrar();
    void borrar(T c);

private:
    struct celdaArbol
    {
        T elemento;
        celdaArbol *hder, *hizqu,*padre;
    };
    typedef celdaArbol *ptrcelda;
    ptrcelda laraiz;
public:
    void mostrarPrincipio(celdaArbol *a);

    class Iterator
    {
    private:
        friend class Arbol;
        celdaArbol *puntero;

    public:
        Iterator()
        {
            puntero=nullptr;
        }
        Iterator(celdaArbol *p)
        {
            puntero=p;
        }
        Iterator & operator=(const Iterator & it)
        {
            puntero=it.puntero;
            return *this;
        }
        T& operator*()
        {
            return puntero->elemento;
        }
        Iterator & operator ++()
        {
            if(this->puntero->padre != nullptr && this->puntero->elemento < this->puntero->padre->elemento)
                *this=this->puntero->padre;
            else if(this->puntero->hizqu != nullptr &&this->puntero->elemento < this->puntero->hizqu->elemento)
                *this=this->puntero->hizqu;
            else if(this->puntero->hder != nullptr && this->puntero->elemento < this ->puntero->hder->elemento)
                *this=this->puntero->hder;
            return *this;


        }
        Iterator & operator --()
        {

        }
        bool operator==(const Iterator & i) const
        {
            return i.puntero->elemento==puntero->elemento ? true : false;
        }
        bool operator!=(const Iterator & i) const
        {
            return i.puntero->elemento==puntero->elemento ? false : true;
        }


    };

    Iterator begin();
    Iterator end ();
private:
    Iterator siguiente(Iterator it);



};
//Implemetación de los métodos!
template <typename T>
Arbol<T>::Arbol()
{
    laraiz=nullptr;
}
template <typename T>
Arbol<T>::Arbol(const T & e)
{
    celdaArbol n=new celdaArbol;
    n->elemento=e;
    n->padre=n->hizqu=n->hder=nullptr;
}
template <typename T>
void Arbol<T>:: insertar( T c)
{
    if(laraiz==nullptr)
    {
        laraiz=new celdaArbol;
        laraiz->elemento=c;
        laraiz->padre=laraiz->hizqu=laraiz->hder=nullptr;
    }
    else
    {
        celdaArbol *com=laraiz;
        while(true)
        {
            if(c>com->elemento)
            {
                if(com->hder==nullptr)
                {
                    com->hder=new celdaArbol;
                    com->hder->elemento=c;
                    com->hder->padre=com;
                    com->hder->hder=com->hder->hizqu=nullptr;
                    break;
                }
                else
                {
                    com=com->hder;
                    continue;
                }
            }
            else
            {
                if(com->hizqu==nullptr)
                {
                    com->hizqu=new celdaArbol;
                    com->hizqu->elemento=c;
                    com->hizqu->padre=com;
                    com->hizqu->hder=com->hizqu->hizqu=nullptr;
                    break;
                }
                else
                {
                    com=com->hizqu;
                    continue;
                }
            }
        }
    }



}
template<typename T>
void Arbol<T>::mostrarPrincipio(celdaArbol *a)
{
    if(a!=nullptr)
    {
        a->padre==nullptr ? cout<<"Valor nodo="<<a->elemento<<endl : cout<<"valor nodo="<<a->elemento<<"padre-->"<<a->padre->elemento<<endl;
        mostrarPrincipio(a->hizqu);
        mostrarPrincipio(a->hder);
    }

}
template <typename T>
void Arbol<T>::borrar(T c)
{
    bool encontrado=false;

        Arbol::Iterator it;
        it=this->begin();
    while(!encontrado)
    {
        if(*it!=c){
            ++it;}
        else{
            if(it.puntero->hder==nullptr && it.puntero->hizqu==nullptr){
                encontrado=true;

                Iterator az(it.puntero->padre);
                delete az.puntero->hder->hizqu;
                delete az.puntero->hder->hder;
                delete az.puntero->hder;
                az.puntero->hder=nullptr;
                }

        }

    }
}
template<typename T>
void Arbol<T>::mostrar()
{
    mostrarPrincipio(laraiz);

}
template<typename T>
typename Arbol<T>::Iterator Arbol<T>::begin()
{
    celdaArbol *n=laraiz;
    if(n!=nullptr)
    {
        while(n->hizqu!=nullptr)
            n=n->hizqu;
        return typename Arbol<T>::Iterator(n);
    }

}
template <typename T>
typename Arbol<T>::Iterator Arbol<T>::end()
{
    celdaArbol *n=laraiz;
    if(n!=nullptr)
    {
        while(n->hder!=nullptr){
            n=n->hder;
        }
        return typename Arbol<T>::Iterator(n);
    }
}




