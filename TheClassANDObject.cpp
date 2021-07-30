
#include<iostream>
#include<string>
using namespace std;
// class = {variable[dataMember] + function[method]} // function inside the class called method.

	// dataMember : property [Private]
	//     method : action/ process [public / protected]

/**
 *   private : access within the same class
 *    public : access anywhere
 * protected : few can access it with inheritance.
 * 
 * */
//public.method -> private.property
class Dog{

 private:
	string name; 
	string breed;
	int age;

	public : 
	void setData()
	{
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter breed : ";
		cin>>breed;
		cout<<"Enter age : ";
		cin>>age;
	}
	void getData()
	{
		cout<<"name : "<<name<<endl;
		cout<<"breed: "<<breed<<endl;
		cout<<" age : "<<age<<endl;
	}
};
int main()
{
	Dog d;

	
	d.setData();
	cout<<"-------------------\n";
	d.getData();
	

}