//add include statements
#include "func.h"
#include <iostream>
using std::string;
using namespace std;

//add function code here
double get_gc_content(const string& dna)
{
    double count;

    for(int i; i < dna.length(); i++){
        if( dna[i] == 'G' || dna[i] == 'C'){
            count ++;
            cout<<count;
        }else{
            continue;
        }
    }
    double result = count/dna.length();
    return result;
}
string get_dna_complement(string dna)
{   
    string rev_dna = get_reverse_string(dna);

    for (int i = 0; i < rev_dna.length(); i++)
    {
    switch (rev_dna[i]){
        case 'A':
            return "T";
            break;
        case 'T':
            return "A";
            break;
        case 'G':
            return "C";
            break;
        case 'C':
            return "G";
            break;
    }
    }
    return dna;
}

string get_reverse_string(string dna)
{
    for (int i = 0; i < dna.length() / 2; i++)
        swap(dna[i], dna[dna.length() - i - 1]);
    return dna;
}   
