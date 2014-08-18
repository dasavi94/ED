#include "VectorDinamico.cpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	VectorDinamico<int> p(7);
	cout<<p.size()<<endl;
	for(int i=0;i<p.size();i++)
		p.set(i,2);
	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;
	cout<<"\nCambiamos el tamaño a 10"<<endl;
	p.resize(4);
	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;
	cout<<p.size()<<endl;

	VectorDinamico<int> z(4);
	cout<<z.size()<<endl;

	for(int i=0;i<z.size();i++)
		z.set(i,4);

	p=z;

	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;




	VectorDinamico <float> f(18);
	VectorDinamico <string> s(5);

	for(int i=0;i<f.size();i++)
		f.set(i,18.6);
	for(int i=0;i<s.size();i++)
		s.set(i,"holi");

	for(int i=0;i<f.size();i++)
		cout<<i<<":"<<f.get(i)<<endl;
	for(int i=0;i<s.size();i++)
		cout<<i<<":"<<s.get(i)<<endl;

	return 0;
}
