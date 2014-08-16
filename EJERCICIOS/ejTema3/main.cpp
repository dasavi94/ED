#include "VectorDinamico.h"

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
	p.resize(4);
	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;
	cout<<p.size()<<endl;

	VectorDinamico z(4);
	cout<<z.size()<<endl;

	for(int i=0;i<z.size();i++)
		z.set(i,4);

	p=z;

	for(int i=0;i<p.size();i++)
		cout<<i<<":"<<p.get(i)<<endl;

	return 0;
}
