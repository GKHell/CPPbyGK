

#include<iostream>
#include<string>
using namespace std;

class Student{

public:

		Student()
		{

			cout<<"m0 : Constructor 0 , \t"<<endl;

		}
		Student(int id)//m1
		{
			cout<<"m1 : Constructor 1 , \t"<<id<<endl;
		}

		Student(int id,int no) //m2
		{
			cout<<"m2 : Constructor 2 , \t"<<id<<"\t"<<no<<endl;
		}


};
int main()
{
	Student s1(19),s2(3),s3(100,32);
 
	// cout<<"s2 "<<&s2<<endl;

}