//write include statements
#include <iostream>
#include <string>
#include "decisions.h"
using namespace std;

int main() 
{
	int grade; 

	cout<<"Please enter your grade: ";
	cin>>grade;

	string if_grade = get_letter_grade_using_if(grade);
	cout<<"Here is your grade using if statements: "<<if_grade<<endl;

	string switch_grade = get_letter_grade_using_switch(grade);
	cout<<"Here is your grade using a switch statements: "<<switch_grade<<endl;

	return 0;
}