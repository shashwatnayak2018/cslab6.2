//library
#include<iostream>
//namespace
using namespace std;
//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
void askvalue(float &unitCst, float &units,float &taxRt)
{
	//ask for the value of unit cost
	cout<<"Enter the value of unit cost:"<<endl;
	//read the value
	cin>>unitCst;
	//ask for the value of units
	cout<<"Enter the value of units:"<<endl;
	//read the value
	cin>>units;
	//ask for the value of tax rate
	cout<<"Enter the value of tax Rate:"<<endl;
	//read the value
	cin>>taxRt;
}
//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
void calculate(float unitCst,float units,float taxRt, float &salesTx,float &totDue)
{
	salesTx=(unitCst*units)*taxRt;
	totDue=(unitCst*units)+(unitCst*units)*taxRt;
}
//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
int output(float unitCst,float units,float taxRt,float salesTx,float totDue)
{
	//print all the values
	cout<<"The value of unitcost is:"<<unitCst<<endl;
	cout<<"The value of units is:"<<units<<endl;
	cout<<"The value of tax rate is:"<<taxRt<<endl;
	cout<<"The value of sales tax is:"<<salesTx<<endl;
	cout<<"The value of totDue is:"<<totDue<<endl;
	return 0;
}
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
int main()
{
	float unitCost,unitsPurch,taxRate,salesTax,totalDue;
	askvalue(unitCost,unitsPurch,taxRate);
	calculate(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	output(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}
