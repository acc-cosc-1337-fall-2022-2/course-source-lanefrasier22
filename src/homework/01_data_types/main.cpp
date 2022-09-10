//write include statements
#include "data_types.h"

//write namespace using statement for cout
#include <iostream>

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	std::cout<<"Enter an integer: ";
	std::cin>>num;
	int result;
	result = multiply_numbers(num);
	std::cout<<result<<"\n";
	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout<<result<<"\n";

	return 0;
}
