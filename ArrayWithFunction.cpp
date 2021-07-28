// array with function

#include<iostream>
using namespace std;
int n;
void sort(int a[10]) // we can also use 'a[]' ,if you dont want to mention size. 
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}
}
int max(int *p) // third way to pass an array in function using pointer.
{
	int max = *p;
	for(int i=0;i<n;i++)
	{
			if(*(p+i) > max)
			{
				max = *(p+i); // update max 
			}
	}

	return max;
}
int main()
{

	int a[100],i;

	cout<<"Enter size : ";
	cin>>n;

	cout<<"Enter the array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<" a[ "<<i<<" ] = ";
		cin>>a[i]; 
	}

	//
		sort(a);
	//

	cout<<"----------------------\n";
	for(i=0;i<n;i++)
	{
		cout<<" a[ "<<i<<" ] = "<<a[i]<<endl; 
	}

	cout<<"Maximun in array : "<<max(a);
}