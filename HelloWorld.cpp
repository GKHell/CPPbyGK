
#include<iostream>
#include<string.h>

// '' means character
// "" means string
using namespace std;
int main()
{

	int a,b;
	char ch;
	string s = "HelloWorld";	
	cout<<"s says : "<<s<<endl;
	cout<<"Enter expression : ";
	cin>>a>>ch>>b;
 
	switch(ch)
	{
		case '+' : cout<<a<<" + "<<b<<" = "<<a+b<<endl;break;
		case '-' : cout<<a<<" - "<<b<<" = "<<a-b<<endl;break;
		case '*' : cout<<a<<" * "<<b<<" = "<<a*b<<endl;break;
		case '/' : cout<<a<<" / "<<b<<" = "<<a/b<<endl;break;
		case '%' : cout<<a<<" % "<<b<<" = "<<a%b<<endl;break;
		case '>' : cout<<a<<" > "<<b<<" = "<<(a>b)<<endl;break;
		default : cout<<"invalid operator....";
	}

return 'A';
}