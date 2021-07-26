
/**
 * A :  Break : loop exit // continue for skiping iteration
 * B : Return : function exit
 * C :   exit : program exit
 * */
#include<iostream>
using namespace std;
int say()
{
		cout<<"statement 1"<<endl;
			// return 10;
		exit(0);
		cout<<"statement 2"<<endl;

}
int main()
{

	// for(int i=0;i<10;i++)
	// {
	// 	if(i%2==0)
	// 	{ 
	// 		break;
	// 	}
	// 		cout<<"line "<<i<<endl;
	// }
	cout<<"-------------------Code 1"<<endl;
			say();
	cout<<"-------------------Code 2"<<endl;

}