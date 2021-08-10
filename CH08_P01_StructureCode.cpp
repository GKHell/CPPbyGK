


#include<iostream>
#include<string>
using namespace std;

struct Student{

	int rollno;
	string name;
	float marks;
};

int main()
{
	struct Student s={12,"Rio",33};
	cout<<"Hello "<<s.name<<endl;

	cout<<"-------------------\n";

	struct Student me;
	cout<<"Enter name : ";
	cin>>me.name;

	cout<<"Enter rollno : ";
	cin>>me.rollno;

	cout<<"Enter marks : ";
	cin>>me.marks;

	cout<<"\t"<<me.name<<"\t"<<me.rollno<<"\t"<<me.marks;

}

