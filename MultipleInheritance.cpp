
/*Multiple inheritance*/
/**
 * 	A -> C
 *  B -> C
 * A,B -> C
 * 
 * */
#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"class A\t"<<this<<endl;
		}
};
class B{
	public:
		B()
		{
			cout<<"class B\t"<<this<<endl;
		}
};
class C : public B,public A{
	public:
		C()
		{
			cout<<"class C\t"<<this<<endl;
		}
};

int main()
{
	C c1;
	cout <<"address of c1 "<<&c1<<endl;

	cout<<"\n\n";

	C c2;
	cout <<"address of c2 "<<&c2<<endl;

}