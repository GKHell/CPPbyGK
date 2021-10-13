
#include <iostream>

using namespace std;
class Shape{
protected:
	double l,b,area;

public: 
	void get_data()
	{
		cout<<"Enter l : ";
		cin>>l;

		cout<<"Enter b : ";
		cin>>b;
	}

	virtual void display_area()
	{
		cout<<"Plz use reference of specific class to display area...";
	}	
};

class Triangle : public Shape{

	void display_area()
	{
		area = 0.5*l*b;
		cout<<"\nArea of Triangle with h : "<<l<<", b : "<<b<<" is "<<area<<endl;
	}
};

class Rectangle: public Shape{
	void display_area()
	{
		area = l*b;
		cout<<"\nArea of Rectangle with l : "<<l<<", b : "<<b<<" is "<<area<<endl;

	}
};

int main()
{
	Shape *ptr;

	Triangle t;
	Rectangle r;

	ptr = &t;
		ptr->get_data();
		ptr->display_area();

	cout<<"\n ----------------------- \n\n";

	ptr = &r;
		ptr->get_data();
		ptr->display_area();
}