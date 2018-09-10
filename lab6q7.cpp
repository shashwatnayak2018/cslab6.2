/*UpperCase and LowerCase
Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
*/
//library
#include<iostream>
//namespace
using namespace std;
//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
char toUpper(char b)
{
	char c;
	c=(b-32);
	return c;
}
//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
char toLower(char b)
{
	char e;
	e=(b+32);
	return e;
}
//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.
int main()
{
	//declaring variables
	char b;
	//ask for an alphabet
	cout<<"Enter any alphabet either in uppercase or in lowercase:"<<endl;
	//read the alphabet
	cin>>b;
	if(int(b)<123 && int(b)>96)
	{
		cout<<"The uppercase of the alphabet is "<<toUpper(b)<<endl;
	}
	else if(int(b)<91 && int(b)>64)
	{
		cout<<"The lowercase of the alphabet is "<<toLower(b)<<endl;
	}
	else
	{
		cout<<"The entered character is not an alphabet`"<<endl;
	}
	return 0;
}
