#include "int.h"
#include <iostream>

using std::cout;

int main()
{
    int num = echo_variable(5);
    /*
    Can also assign variable as:
    int num;
    num = echo_variable(5);
    */
    cout<<"Echo variable: "<<num<<"\n";
    return 0;
}