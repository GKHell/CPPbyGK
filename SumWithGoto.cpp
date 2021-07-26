
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

	int a,b;
	char ch;

	Start:

			printf("Enter expression : ");
			scanf("%d%c%d",&a,&ch,&b);

			switch(ch)
			{
				case '+':printf("%2d + %2d = %2d\n",a,b,a+b);break;
				case '-':printf("%2d - %2d = %2d\n",a,b,a-b);break;
				case '*':printf("%2d * %2d = %2d\n",a,b,a*b);break;
				case '/':printf("%2d / %2d = %2d\n",a,b,a/b);break;
				case '%':printf("%2d %% %2d = %2d\n",a,b,a%b);break;
			}

			cout<<"Do you want to repeat [y/n]: ";
			cin>>ch;

	if(ch=='y' || ch=='Y')
	{
		system("clear"); // cls
		goto Start;
	}
}