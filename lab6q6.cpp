/*Sum of even and odd
Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values
*/
//library
#include<iostream>
//namespace
using namespace std;
//Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value.
int sumEvenNumbers(int a, int b)
{
	int sum=0;
	for(int i=(a+1);i<b;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	return sum;
}
//Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
int sumOddNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{
		if(i%2==1)
		{
			sum+=i;
		}
	}
	return sum;
}
//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value.
int sumSquareOddNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{
		if(i%2==1)
		{
			sum+=(i*i);
		}
	}
	return sum;
}
//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.
int sumSquareEvenNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
			sum+=(i*i);
		}
	}
	return sum;
}
/*Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values
*/
int main()
{
	//declaring variables
	int a,b;
	int sumEven,sumOdd,sumSquareOdd,sumSquareEven;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	sumEven=sumEvenNumbers(a,b);
	sumOdd=sumOddNumbers(a,b);
	sumSquareOdd=sumSquareOddNumbers(a,b);
	sumSquareEven=sumSquareEvenNumbers(a,b);
	cout<<"The sum of all even numbers between those two numbers is:"<<sumEven<<endl;
	cout<<"The sum of all odd numbers between those two numbers is:"<<sumOdd<<endl;
	cout<<"The sum of square of all odd numbers between those two numbers is:"<<sumSquareOdd<<endl;
	cout<<"The sum of square of all even numbers between those two numbers is:"<<sumSquareEven<<endl;
	return 0;
}
