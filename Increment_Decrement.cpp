
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main()
{

	int data,n1,n2;
	int level = 3;
	int counter = 0;
	
	do{

		srand(time(0));
		n1 = rand()%10;
		n2 = rand()%10;
		cout<<n1<<" + "<<n2<<" = ";
		cin>>data;
		if(data!=(n1+n2))
		{
			counter++;
			cout<<"\a";
		}
		else
		{

			level--;
			if(level<0)
				level = 3;

		}

	}while(counter!=3);

}