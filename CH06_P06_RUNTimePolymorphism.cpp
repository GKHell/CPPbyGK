	
/**
 * 
 * 	run time : same prototype , with diff class
 * 
 * */

// single inheritance

#include<iostream>
using namespace std;
class A{

	public :
		void sum(int a,int b)
		{
			cout<<"m1 \t"<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
};
class B : public A{

	public :
		void sum(int a,int b)
		{
			cout<<"m2 \t"<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
};
int main()
{
	B b;
	b.sum(23,42);
	b.A::sum(3,2);
}