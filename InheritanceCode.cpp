

#include<iostream>
using namespace std;
// A -> B.
class A{ //base 

	public:
		void say()
		{
			cout<<"Hello World\t"<<this<<endl;
		}
};
class B : public A{ //derived class

};

int main()
{
	B obj;
	obj.say();
	cout<<"address of Object : "<<&obj<<endl;
}