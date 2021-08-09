
/**
 * returnValue functionName(args....)
 * {
 * 				code......
 * }
 * */
#include<iostream>
using namespace std;
void say(string name)
{
	cout<<"Hello "<<name<<endl;
}
void say()
{
	cout<<"Hi "<<endl;
}
int main()
{
	say("GK");
	say();
}