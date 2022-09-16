//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout<<"Please enter your meal amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Please enter the percentage of tip you'd like to provide (in decimal"
	" form): \n";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Here is your receipt: \n"
	"Meal amount is $"<<meal_amount<<
	"\nSales tax is "<<tax_rate * 100<<"%"
	"\nTip amount is $"<<tip_amount<<
	"\nTotal is $"<<total<<"\n";


	return 0;
}
