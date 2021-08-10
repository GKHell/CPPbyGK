


#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

struct Student{

	int rollno;
	char name[100];
	
	struct Result{
					float maths;
					float english;
					float science;
	}r;
};

int main()
{
		struct Student s[100];
		int n,i;

		cout<<"Enter no of Students : ";
		cin>>n;

		for(i=0;i<n;i++)
		{

				cout<<"Enter name : ";
				cin>>s[i].name;
				cout<<"Enter rollno : ";
				cin>>s[i].rollno;
				cout<<"Enter marks[maths,english,science] : ";
				cin>>s[i].r.maths>>s[i].r.english>>s[i].r.science;

		}


		cout<<"------------------------\n";

		for(i=0;i<n;i++)
		{
			printf("%10s %3d [ %3.2f, %3.2f ,%3.2f ] \n",s[i].name,s[i].rollno,s[i].r.maths,s[i].r.english,s[i].r.science);
		}

}

