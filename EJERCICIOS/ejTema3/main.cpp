#include "VectorDinamico.h"
#include <iostream>

using namespace std;
int main()
{
	VectorDinamico p(7);
	cout<<p.size()<<endl;
	for(int i=0;i<p.size();i++)
		p.set(i,2);
	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;
	cout<<"\nCambiamos el tamaño a 10"<<endl;
	p.resize(10);
	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;
	cout<<p.size()<<endl;
	return 0;
}
