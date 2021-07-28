
#include<iostream>
using namespace std;
int main()
{
	int a[10][10][10];
	int i,j,k;
	int t,r,c;
	int x=0;

	cout<<"Enter configurations : ";
	scanf("%dx%dx%d",&t,&r,&c);

	for(i=0;i<t;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
				a[i][j][k] = ++x;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
				cout<<a[i][j][k]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"------------\n";
	}
}