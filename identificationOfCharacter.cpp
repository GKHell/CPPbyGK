

#include<iostream>
using namespace std;
int main()
{

	char c;

	cout<<"Enter the character : ";
	cin>>c;

	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		cout<<c<<" is alphabet."<<endl;

	else if(c>='0' && c<='9')
		cout<<c<<" is digit."<<endl;

	else 
		cout<<c<<" is special symbol.."<<endl;


	if(!!NULL) 
		cout<<"programming is easy. huhhh...?";
	else
		cout<<"Hell is here then..";
}