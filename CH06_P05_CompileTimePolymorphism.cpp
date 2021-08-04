/**
 * 
 * compile time : diff prototype, we can use it without a class
 * */
#include<iostream>
using namespace std;

void sum(int a,int b)  //m1
{
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}

void sum(int a,int b,int c) //m2
{
	cout<<a<<" + "<<b<<" + "<<c<<" = "<<a+b+c<<endl;
}

int main()
{
	sum(2,5);
	sum(1,2,34);
}