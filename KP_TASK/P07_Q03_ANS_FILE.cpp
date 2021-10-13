

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
	cout<<"get() : "<<char(file.get())<<endl;

	string data;

	cout<<"enter a line : ";
	cin>>data;

	file<<data;

	file.seekg(0,ios::beg);
	string newData;
	getline(file,newData);

	cout<<"getline ; "<<newData<<endl;
}