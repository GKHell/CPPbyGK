/*5! : 5x4x3x2x1*/
#include<iostream>
using namespace std;
int fact(int n)
{
	printf("%d\n",n);
	if(n==1)
		return 1;
	int x =  n*fact(n-1);
	// cout<<"ans : "<<x<<"\t"<<n<<endl;
	printf("%3d \t %2d\n",x,n);
	return x;
}
int main()
{

	int x = fact(5);
	cout<<"\nfact : "<<x<<endl;
}