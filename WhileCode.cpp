#include<iostream>
using namespace std;
int main()
{
	int reverse = 0;
	int reminder;
	int num;

	cout<<"Enter the number : ";
	cin>>num;

	while(num>0)
	{
		reminder = num % 10;
		reverse = reverse*10+reminder;
		num = num/10;
	}

	cout<<"         reverse : "<<reverse<<endl;
	/**
	 * Num(231:num/10) 			reminder(num%10) 		reverse : reverse=reverse*10+rem
	 * ------------------------------------------------------
	 * 231							1                    1
	 * 23           				3                    13              
	 * 2                            2                    132
	 * -------------------------------------------------------
	 * 0
	 * */

	// 231:132 
}
