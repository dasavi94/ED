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
	
	cout<<"TAMANIOS POR i,f,c,s:"<<i.getTamanio()<<" "<<f.getTamanio()<<" "<<c.getTamanio()<<s.getTamanio()<<endl;

cout<<i.get()<<endl;
cout<<f.get()<<endl;
cout<<c.get()<<endl;
cout<<s.get()<<endl;
	
	
	//cout<<i.vacia()<<"\n"<<f.vacia()<<"\n"<<c.vacia()<<endl;
	//cout<<i.getNull()<<"\n"<<f.getNull()<<"\n"<<c.getNull()<<endl;
}