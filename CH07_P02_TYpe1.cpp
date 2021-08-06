
/*
	function without return value , without args..
*/
#include<iostream>
using namespace std;
void print()
{
	int i,j,n;
	cout<<"Enter n : ";
	cin>>n;
	for(i=0;i<n;i++)// row
	{
		for(j=0;j<n;j++) // column : till row ends
		{
			cout<<"\u1410  "; //use (char)3
		}
		cout<<"\n";
	}
}
int main()
{
	print();
}