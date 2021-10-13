

#include<iostream>
using namespace std;

class Coords{

public:
	int x,y;

public:
	Coords()
	{
		x = y = 0;
	}

	void operator ++() //pre
	{
		++x;
		++y;
	}
	void operator ++(int) //post
	{
		x++;
		y++;
	}

	void operator --() //pre
	{
		--x;
		--y;
	}
	void operator --(int) //post
	{
		x--;
		y--;
	}
	void display()
	{
		cout<<"(x, y) : ("<<x<<", "<<y<<")\n";
	}
};
int main()
{
	Coords s;

	s++;
	s.display();

	++s;
	s.display();

	--s;
	s.display();

	s--;
	s.display();
}