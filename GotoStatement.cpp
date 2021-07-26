
// goto statement:
/**
 * TYpe 1 = forward jump
 * 
 * goto Label;
 *         	......
 *          ......
 *          ......
 *   Label:
 * 
 * */
/**
 * Type 2 : backward jump
 * 
 * Label :
 * 
 * 		.......
 * 		.......
 * 		.......
 * 
 * goto Label;
 * 
 * 
 * */

#include<iostream>
using namespace std;
int main()
{
 	// forward jump
	// 	cout<<"line 1 "<<endl;
	// 	cout<<"line 2 "<<endl;
	// goto Code;
	// 	cout<<"line 3 "<<endl;
	// 	cout<<"line 4 "<<endl;
	// Code:	
	// 	cout<<"line 5 "<<endl;
	// 	cout<<"line 6 "<<endl;

	cout<<"---------------------"<<endl;

		cout<<"program 1"<<endl;
		cout<<"program 2"<<endl;
	int i = 0;
	Bug:
		cout<<"\t\tprogram 3 "<<i<<endl;
		cout<<"program 4"<<endl;
	if(i++<10)
		goto Bug;
		cout<<"program 5"<<endl;


}