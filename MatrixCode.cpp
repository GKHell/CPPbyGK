
#include<iostream>
using namespace std;


int main()
{
	int a[20][20];
	int i,j;
	int n,m,x=0;

	cout<<"Enter rows and columns : ";
	cin>>n>>m;

	cout<<"Enter the matrix : "<<endl;
	for(i=0;i<n;i++)//rows
	{
		for(j=0;j<m;j++)
		{
			a[i][j] = ++x; //auto increment 
		}
	}

	cout<<"\n--------------- \n\n";

	for(i=0;i<n;i++)//rows
	{
		for(j=0;j<m;j++) //column
		{
			// cout<<a[i][j]<<"  ";
			printf("%3d ",a[i][j]);
		}
		cout<<"\n";
	}

	cout<<"\n--------------- \n\n";


		for(j=0;j<m;j++) //column
		{
			for(i=0;i<n;i++)//rows
			{
				// cout<<a[i][j]<<"  ";
				printf("%3d ",a[i][j]);
			}
			cout<<"\n";
		}

}