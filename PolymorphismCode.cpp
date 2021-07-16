
#include<iostream>
using namespace std;

void sum(int a,int b)
{
	cout<<"F1\t"<<a<<" + "<<b<<" = "<<(a+b)<<endl;
}

void sum(int a,int b,int c)
{
	cout<<"F2\t"<<a<<" + "<<b<<" + "<<c<<" = "<<(a+b+c)<<endl;
}
int main()
{

		sum(10,30); //f1
		sum(3,4,5); //f2
		return 0;
}