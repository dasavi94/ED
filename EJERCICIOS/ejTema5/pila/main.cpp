#include "pila.cpp"
#include <string>

int main()
{
	Pila<int> i;
	Pila<float> f(5);
	Pila<string> s(10);
	Pila<char> c(10);
	for(int j=0;j<4;j++)
		i.push(5);
	for(int j=0;j<6;j++)
		f.push(5.52);
	for(int j=0;j<12;j++)
		c.push('p');
	for(int j=0;j<12;j++)
		s.push("prueba");
	i.del();
	f.del();
	c.del();
	
	cout<<"TAMANIOS POR i,f,c,s:"<<i.getTamanio()<<" "<<f.getTamanio()<<" "<<c.getTamanio()<<" "<<s.getTamanio()<<endl;
	cout<<"OCUPADOS i,f,c,s:"<<i.getOcupados()<<" "<<f.getOcupados()<<" "<<c.getOcupados()<<" "<<s.getOcupados()<<endl;

	
	while (!i.vacia()) cout<<"Ocupado "<<i.getOcupados()<<" "<<i.get()<<endl;
	while (!f.vacia()) cout<<"Ocupado "<<f.getOcupados()<<" "<<f.get()<<endl;
	while (!c.vacia()) cout<<"Ocupado "<<c.getOcupados()<<" "<<c.get()<<endl;
	while (!s.vacia()) cout<<"Ocupado "<<s.getOcupados()<<" "<<s.get()<<endl;	
	
	cout<<i.vacia()<<"\n"<<f.vacia()<<"\n"<<c.vacia()<<endl;
	cout<<i.getNull()<<"\n"<<f.getNull()<<"\n"<<c.getNull()<<endl;
}
