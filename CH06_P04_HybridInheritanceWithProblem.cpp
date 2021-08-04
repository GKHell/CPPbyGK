
/**
 * Hybrid : use more than two inheritance into a single prgrame .
 * */
#include<iostream>
using namespace std;
/**
 * A -> B
 * A -> C
 * B,C -> D
 * */

class A {
	public:
		A()
		{
			cout<<"\tclass A with "<<this<<endl;
		}
};
class B : virtual public A{

	public:
		B()
		{
			cout<<"class B with "<<this<<endl;
		}
};
class C : virtual public A{

	public:
		C()
		{
			cout<<"class C with "<<this<<endl;
		}
};
class D : public B,public C{
	public:
		D()
		{
			// cout<<"class D with "<<this<<endl;
		}
};
int main()
{
	D d;
}