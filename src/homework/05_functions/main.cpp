#include "func.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() 
{
	int choice;
	cout<<"Main Menu: \n";
	cout<<"1. Get GC Content \n";
	cout<<"2. Get DNA Complement \n";
	cout<<"3. Exit \n";
	cout<<"Please key in your choice: ";
	cin>>choice;

	if( choice == 1){
		string dna;
		cout<<"Please enter the DNA string: ";
		cin>>dna;
		double output = get_gc_content(dna);
		cout<<"Here is the GC content: "<<output;
	}else if( choice== 2){
		string dna;
		cout<<"Please enter the DNA string: ";
		cin>>dna;
		string output = get_dna_complement(dna);
		cout<<"Here is your DNA complement: "<<output;
	}else{
		cout<<"Goodbye";
	}
	return 0;
}