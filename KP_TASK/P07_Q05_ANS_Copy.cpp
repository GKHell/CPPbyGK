

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream file1;
	ofstream file2;

	string f1,f2;

	cout<<"Enter file1 : ";
	cin>>f1;
	
	cout<<"Enter file2 : ";
	cin>>f2;

	file1.open(f1);
	file2.open(f2);

	string line;
	while(file1)
	{
		getline(file1,line);
		file2<<line;

	}

	cout<<"copied ...";


}