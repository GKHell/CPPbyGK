
#include<iostream>
#include<string.h>
using namespace std;

class Book
{private:
	string bookName;
	double price;
public:
	void setData() //methd 1
	{
		cout<<"Enter the book name : ";
		cin>>bookName;

		cout<<"Enter price : ";
		cin>>price;
	}

	void showData()//method 2
	{
		cout<<bookName<<"\t"<<" $ "<<price<<endl;
	}
};

int main()
{	
	Book ketu,aum;


	ketu.setData();
	aum.setData();
	printf("------------------\n");
	ketu.showData();
	aum.showData();
}