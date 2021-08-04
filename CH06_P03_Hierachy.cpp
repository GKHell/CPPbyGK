

#include<iostream>
using namespace std;
/**
 * A->B
 * A->C
 * */
class A{

	public:
		A()
		{
			cout<<"class A with "<<this<<endl;
		}
};
class B:public A{

		public:
		B()
		{
			cout<<"class B with "<<this<<endl;
		}
};
class C:public A{

	public:
		C()
		{
			cout<<"class C with "<<this<<endl;
		}
};
int main()
{

	 B b;
	 C c;
}