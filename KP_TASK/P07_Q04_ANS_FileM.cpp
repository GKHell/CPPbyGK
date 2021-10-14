

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;




int main()
{
	fstream file;
	string fileName;


	cout<<"Enter the file Name : ";
	cin>>fileName;

	file.open(fileName,ios::trunc | ios::in | ios::out);

	if(!file)
	{
		cout<<fileName<<" couldn't open...";
		exit(0);
	}

	// display data : 

	file<<"/^~~~~~"<<setw(6)<<"*~~~~~~~~*~~~~~~~~~~~~~~*~~~~~~~~~~~~~*~~~~~~~~~~~~~~>"<<endl;
	file<<setw(7)<<"| SrNo "<<setw(6)<<"| rollno |"<<setw(15)<<" name     |"<<setw(15)<<"subject   | "<<setw(15)<<setprecision(3)<<"marks    | "<<endl;
	// file<<"+~~~~~~"<<setw(6)<<"+~~~~~~~~+~~~~~~~~~~~~~~+~~~~~~~~~~~~~+~~~~~~~~~~~~~~+"<<endl;
	
	int rollno=12,n;
	float marks=21.96;
	string name="12345 ",subject="1234 80";
	
	cout<<"Enter no of Students : ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"\n Data for student "<<i+1<<endl;
			cout<<"Enter rollno : ";
			cin>>rollno;

			cout<<"Enter name : ";
			cin>>name;

			cout<<"Enter subject : ";
			cin>>subject;

			cout<<"Enter marks : ";
			cin>>marks;
	

			file<<"+------"<<setw(6)<<"+--------+--------------+-------------+--------------+"<<endl;

		file<<"|"<<setw(4)<<i+1<<"  |  "<<setw(4)<<rollno<<"  |"<<setw(15)<<"  "+name+"  |"<<setw(14)<<"  "+subject+" |"<<"    "<<setw(5)<<marks<<"     |"<<endl;
	}

	file<<"\\------"<<setw(6)<<"+--------+--------------+-------------+--------------+"<<endl;

	file<<" operation done with : "<<setfill('x')<<setw(5)<<683*n*2/3<<endl;
}