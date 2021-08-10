


#include<iostream>
#include<string>
using namespace std;

struct Student{

	int rollno;
	string name;
	
	struct Result{
					float maths;
					float english;
					float science;
	}r;
};

int main()
{
		struct Student s;

		cout<<"Enter name : ";
		cin>>s.name;
		cout<<"Enter rollno : ";
		cin>>s.rollno;
		cout<<"Enter marks[maths,english,science] : ";
		cin>>s.r.maths>>s.r.english>>s.r.science;

		cout<<"------------------------\n";

		cout<<" name  "<<s.name<<" rollno : "<<s.rollno<<" marks [ "
			<<s.r.maths<< " , " << s.r.english<< " , "<< s.r.science<<" ] "<<endl;
}

