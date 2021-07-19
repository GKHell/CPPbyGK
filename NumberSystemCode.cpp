
#include<iostream>
using namespace std;

int main()
{
	int deci = 30; //0-9
	int oct = 035;//0-7 //prefix '0'denotes that,there is an octal number
	int hex = 0x32;//0-9,A..F //prefix '0x' denotes that ,there is a hexa number 


	cout<<"Decimal : "<<deci<<endl; // print as it

	cout<<"octal : "<<oct<<endl; // base 8
	/*
			8^2 8^1	8^0
			-------------
			64	 8   1
			   x 3   5
			  ---------
			    24 + 5 = 29

	*/
	cout<<"hex : "<<hex<<endl; //base 16
	/*
			16^2	16^1	16^0
			--------------------
			256     16       1
			       x 3       2
			      --------------
			       48    +   2 = 50
	*/
}