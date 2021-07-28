
#include<iostream>
using namespace std;
int n;
char code[100];

char* convert(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		code[i] = a[i]; // int -> char
	}

	return code;//returning base address
}  
int main()
{
	int a[100],i;
	char *p;

	cout<<"Enter size : ";
	cin>>n;

	cout<<"Enter the array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<" a[ "<<i<<" ] = ";
		cin>>a[i]; 
	}

	p = convert(a); // here p is used to get base address 

	for(i=0;i<n;i++)
	{
		 cout<<" a [ "<<i<<" ] = "<<a[i]<<"\t: "<<*(p+i)<<endl;
	}
}