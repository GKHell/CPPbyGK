
/*
	with return value ,with args..
*/
#include<iostream>
using namespace std;
bool print(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%(j+1)==0)
			{
				cout<<" \u2ee0 ";
			}
			cout<<" \u20AA ";
		}
		cout<<endl;
	}
	return (n<50);
}
int main()
{
	int n;
	cout<<"Enter the n : ";
	cin>>n;
	bool me = print(n);
	if(me)
	{
		cout<<"valid..";
	}
	else
	{
		cout<<"invalid..";
	}
}