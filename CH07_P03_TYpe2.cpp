
/*
	without return value ,with args..
*/
#include<iostream>
using namespace std;
 void print(int n)
{
	int i,j;
	i=0;
	for(;;) // row
	{
		if(i>=n)
			break;
		for(int k =0;k<=i;k++)
		{
			cout<<" ";
		}
		j=n-1;
		for(;;) //column
		{
			cout<<"* ";
			if(j<=i)
				break;
			j--;
		}
		cout<<endl;
		i++;
	}
}
int main()
{
	print(70);
}