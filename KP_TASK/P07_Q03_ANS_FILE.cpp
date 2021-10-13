

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

	string name;
	fstream file;

	cout<<"Enter file : ";
	cin>>name;

	file.open(name,ios::trunc | ios::out | ios::in);

	if(file)
		cout<<"file opened..\n";
	
	file.put('H');

	file.seekg(0,ios::beg);
	cout<<"get() : "<<file.get()<<endl;
}