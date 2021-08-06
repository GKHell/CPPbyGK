
/*
	with return value ,without args..
*/
#include<iostream>
using namespace std;
bool print()
{
	int i,j,n;
	cout<<"Enter the n : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%(j+1)==1)
			{
				cout<<" \u2000 ";
			}
			cout<<" \u20AA ";
		}
		cout<<endl;
	}
	return (n<50);
}
int main()
{
	bool me = print();
	if(me)
	{
		cout<<"valid..";
	}
	else
	{
		cout<<"invalid..";
	}
}