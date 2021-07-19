
#include<iostream>
using namespace std;
#define A 100
int main()
{

	const int i = 10;


	// i  = 50;
	cout<<"value of i : "<<i<<endl;
 	
 	// A = 300;//
	#undef A
 	#define A 300
 	cout<<"value of A : "<<A<<endl;
}