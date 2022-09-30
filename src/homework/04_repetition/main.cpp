//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using namespace std;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int selection;
	do{
		cout<<"Which function would you like: \n";
		cout<<"1 - Factorial \n";
		cout<<"2 - Greatest Common Divisor \n";
		cout<<"3 - Exit \n";
		cin>>selection;
		if(selection == 1){
			int num;
			cout<<"Enter a number for the factorial: ";
			cin>>num;
			int fact = factorial(num);
			cout<<"Here is your factorial: "<<fact<<endl;
			cout<<"Press any number 1 through 3 to continue: "<<endl;
			cin>>selection;
		}else if(selection == 2){
			int num1, num2;
			cout<<"Enter 2 numbers for the GCD seperated by a space: "<<endl;
			cin>>num1>>num2;
			int output = gcd(num1, num2);
			cout<<"Here is your GCD: "<<output<<endl;
			cout<<"Please enter another selection from the menu: "<<endl;
			cin>>selection;
		}else{
			cout<<"Are you sure you want to exit? (Press 3 again to confirm): "<<endl;
			cin>>selection;
			if (selection == 3){
				break;
			}
			}
		}while(selection == 1 || selection == 2 || selection ==3);

	return 0;
}