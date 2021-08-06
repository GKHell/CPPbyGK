
/*
	without return value ,with args..
*/
#include<iostream>
using namespace std;
  print(int n)
{
	int i,j;
	i=0;
	for(;;) // row
	{
		if(i>=n)
			break;
		j=0;
		for(;;) //column
		{
			cout<<" * ";
			if(j>=n)
				break;
			j++;
		}
		cout<<endl;
		i++;
	}
}
int main()
{
	print(10);
}