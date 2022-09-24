//write include statement for decisions header
#include "decisions.h"
using namespace std;
#include <string>

//Write code for function(s) code here
string get_letter_grade_using_if(int num)
{
    if (num >= 90 && num <=100){
        return "A";
    }else if ( num >=80 && num < 90){
        return "B";
    }else if (num >= 70 && num < 80){
        return "C";
    }else if (num >= 60 && num < 70){
        return "D";
    }else return "F";
}

string get_letter_grade_using_switch(int num)
{
    switch(num/10){
        case 10:
            return "A";
            break;
        case 9:
            return "A";
            break;
        case 8:
            return "B";
            break;
        case 7:
            return "C";
            break;
        case 6:
            return "D";
        default:
            return "F";
    }
}