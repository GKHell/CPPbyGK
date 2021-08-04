
/**
 * 
 * A,B -> C
 * 
 * */
#include<iostream>
using namespace std;
class A{
	public:
		void show()
		{
			cout<<"we are in A class"<<endl;
		}
};

class B{
	public:
		void show()
		{
			cout<<"we are in B class"<<endl;
		}
};

class C : public A,public B{
	 
	 public:
		void show()
		{
			cout<<"we are in C class"<<endl;
		}
};
int main()
{

	C c;
	c.A::show(); // display content of A class
	c.B::show(); // display content of B class
	c.show();    // display content of C class

}