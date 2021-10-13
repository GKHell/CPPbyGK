#include <iostream>
#include <string>

using namespace std;

class Vehicle{

protected:
	int vehicleno,classisno;
public:
	virtual void getData() 
	{
		cout<<"Enter the vehicle no : ";
		cin>>vehicleno;

		cout<<"Enter the classis no : ";
		cin>>classisno;
	}

	virtual void showData()
	{
		cout<<"\nVehicle no : "<<vehicleno<<", classis no : "<<classisno<<endl;
	}

};

class Scooter : public Vehicle{

private:
	string company;
	int wheels;

public :
	void getData()
	{
		cout<<"Enter the vehicle no : ";
		cin>>vehicleno;

		cout<<"Enter the classis no : ";
		cin>>classisno;

		cout<<"Enter wheels : ";
		cin>>wheels;

		cout<<"Enter company : ";
		cin>>company;
	}

    void showData()
	{
		cout<<"\nVehicle no : "<<vehicleno<<", classis no : "<<classisno
		<<", wheels : "<<wheels<<", company : "<<company<<endl;
	}

};

class Code : public Vehicle{

private:
	double price;
	string company;

public:
	void getData()
	{
		cout<<"Enter the vehicle no : ";
		cin>>vehicleno;

		cout<<"Enter the classis no : ";
		cin>>classisno;

		cout<<"Enter price : ";
		cin>>price;

		cout<<"Enter company : ";
		cin>>company;
	}

    void showData()
	{
		cout<<"\nVehicle no : "<<vehicleno<<", classis no : "<<classisno<<", price : "<<price<<", company : "<<company<<endl;
	}

};

int main()
{
	Vehicle *ptr;
	Scooter s;
	Code me;

	ptr = &s; // to access derived class [Scooter] , virtually
		ptr->getData();
		ptr->showData();

	cout<<"\n----------------------------\n\n";

	ptr = &me;  // to access derived class [Code] , virtually
		ptr->getData();
		ptr->showData();

}