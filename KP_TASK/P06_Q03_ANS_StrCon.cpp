
#include <iostream>
using namespace std;
class String{

private:
	char str[100];

public:
	String()
	{
		// empty
	}
	String(char new_str[])
	{
		// for str = new_str
		int i=0;
		while(new_str[i])
		{
			str[i] = new_str[i];
			i++;
		}
		str[i]='\0';
	}

	char* display()
	{
		return str;
	}

	// s1+s2

	String operator + (String s2)
	{
		String temp;

		int i=0;
		for(;this->str[i];i++) // copy this->str into temp.str
			temp.str[i] = this->str[i];

		int j=0;
		for(;s2.str[j];i++,j++) // append s2.str into temp.str
			temp.str[i] = s2.str[j];
		
		temp.str[i] = '\0';

		return temp; // now temp becomes s3
	}
};
int main()
{
	String s1("Pro");
	String s2("grammer");

	String s3 = s1+s2;

	cout<<"s1 : "<<s1.display()<<endl;
	cout<<"s2 : "<<s2.display()<<endl;
	cout<<"s3 : "<<s3.display()<<endl;

}