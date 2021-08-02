

#include<string>
#include<iostream>
using namespace std;

// A ->  B
class A{ //class A : parent class

	public:
		string data = "A class";
};

class B: public A{ //class B : child class
 
		public:
			string data = "B class";
};

int main()
{

	B obj;
	cout<<"code : "<<obj.data<<endl;
	cout<<"code : "<<obj.B::data<<endl;

}