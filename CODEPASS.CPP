#include<iostream.h>
#include<conio.h>
// minimum : 3 digits , 2 special , 4 alphabet >  means lengh = 9
int main()
{
	char pass[100];
	int i=-1,special=0,letter=0,digit=0;
	clrscr();
	cout<<"Enter password : ";
	   do{
	      i++;
	      pass[i] = getche();
		if((pass[i]>='a' && pass[i]<='z') || (pass[i]>='A' && pass[i]<='Z'))
		{
		     letter++;
		}
		else if(pass[i]>='0' && pass[i]<='9')
		{
		    digit++;
		}
		else
		{
		    special++;
		}
	   }while(pass[i]!='\n' && pass[i]!='\r');

	   pass[i]= '\0';

	if(special && digit && letter)
	{
	   textattr(2);
	   cprintf("\n\rpassword : %s\n",pass);
	}
	else
	{
	     textattr(4);
	     cprintf("\n\rpassword : %s\n",pass);
	}
	getch();
}