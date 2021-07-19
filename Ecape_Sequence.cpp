

#include<iostream>
using namespace std;
int main()
{

	cout<<"1234\f\f567\f89"<<endl;

	cout<<"line 1"<<endl;
	cout<<"\nline 2"<<endl;
	cout<<"line 3"<<endl;
	cout<<"say \a";
	cout<<endl<<endl;

	// hello 'python' i'm "Java"
	cout<<"hello 'python' i'm \"Java\"  ,do you remember me \?"<<endl;

	char name[] = {'H','e','l','l',
	'\0'
	,'o',' ','w','a','r','\0'};
	cout<<"name : "<<name<<endl;

	//////////

	cout<<"\000736"<<endl;
	cout<<"\x99"<<endl;
}