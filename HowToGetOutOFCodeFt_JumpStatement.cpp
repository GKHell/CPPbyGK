
/**
 * A :  Break : loop exit
 * B : Return : function exit
 * C :   exit : program exit
 * */
#include<iostream>
using namespace std;
int main()
{

	for(int i=0;i<10;i++)
	{
		if(i!=5) break;
		cout<<"line "<<i<<endl;
	}

}