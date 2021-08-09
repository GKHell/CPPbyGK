
#include<iostream>
using namespace std;
//call by value.

void increment(double sal)
{
	sal = sal + 30000;
}

void increment1(double &sal)
{
	sal = sal + 30000;
}
void increment2(double *sal)
{
	*sal = *sal + 30000;
}
int main()
{

	double sal = 20000;
		increment(sal); // no effect //call by value
	cout<<"salary : "<<sal<<endl; // ? 

	increment1(sal); // effect //call by reference
	cout<<"salary : "<<sal<<endl;

	increment2(&sal); // effect // call by pointer.
	cout<<"salary : "<<sal<<endl; 
}