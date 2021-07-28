
#include<iostream>
using namespace std;


int main()
{
	int a[20][20],b[20][20],c[20][20];
	int i,j;
	int n,m,x=0;

	cout<<"Enter rows and columns : ";
	cin>>n>>m;

	cout<<"Enter the matrix  A : "<<endl;
	for(i=0;i<n;i++)//rows
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j]; 
		}
	}

	cout<<"Enter the matrix  B : "<<endl;
	for(i=0;i<n;i++)//rows
	{
		for(j=0;j<m;j++)
		{
			cin>>b[i][j]; 
		}
	}
	cout<<"final matrix : \n";
	for(i=0;i<n;i++)//rows
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<c[i][j]<<" "; 
		}
		cout<<"\n";
	}

/** #task
 * 	A     	  B   	  C
 * ------ 	----- 	-----
 * 3 4 1  	2 4 6 	5 8 7
 * 5 2 3  	2 1 4 	7 3 7
 * 7 2 1  	2 6 1 	8 8 2
 * 
 * */

}