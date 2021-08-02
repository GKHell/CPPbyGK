
// multilevel inheritance
/**
 * A -> B -> C
 * 
 * */
#include<iostream>
#include<string>
using namespace std;

class A{

protected:
	string name = "A";
	public:
		A()
		{
			cout<<"class A"<<endl;
		}
};

class B : public A{

	public:
		B()
		{
			name = "B";
			cout<<"class B"<<endl;
		}
};
class C : public B{

	public:
		C()
		{
			cout<<"class C name : "<<name<<endl; // ?
		}
};



int main()
{
	C c;
}
