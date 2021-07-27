
#include<iostream>
using namespace std;
int main()
{              //0 1 2 3 4 5 6 7 8 9
	 int a[100];
	 int i,n;

	 cout<<"Enter the size : ";
	 cin>>n;

	 cout<<"Enter the array : "<<endl;

	 for(i=0;i<n;i++)
	 {
	 	cout<<" a[ "<<i<<" ] = ";
	 	cin>>a[i];
	 }

	 cout<<"\n----------------------------\n";
	 for(i=0;i<n;i++)
	 {
	 	cout<<" a[ "<<i<<" ] = "<<a[i]<<endl;
	 }

}