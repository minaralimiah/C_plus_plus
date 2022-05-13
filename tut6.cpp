// There are two types of header files:
// 1. System fils it comes with the compiler
// 2. User defined header files: It is written by the programmer.
#include <iostream>
#include "this.h" // It is a example of user defined header file.
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the type of operators in C++:"<<endl<<endl;
    
    //Arithmatic operator:
    cout<<"Following are the Arithmatic operators in C++:"<<endl;
    cout<<"The value of a + b is "<< a + b <<endl;
    cout<<"The value of a - b is "<< a - b <<endl;
    cout<<"The value of a * b is "<< a * b <<endl;
    cout<<"The value of a / b is "<< a / b <<endl;
    cout<<"The value of a % b is "<< a % b <<endl;
    cout<<"The value of a++ is "<< a++ <<endl;
    cout<<"The value of a-- is "<< a-- <<endl;
    cout<<"The value of ++a is "<< ++a <<endl;
    cout<<"The value of --a is "<< --a <<endl<<endl;

    // Assignment operator:
    cout<<"Following are the Assignment operators in C++:"<<endl;
    int c = 3;
    float d = 3.14;
    char f = 'f';

    // Comparison operators:
    cout<<"Following are the Comparison operators in C++:"<<endl;
    cout<<"The value of a == b is "<<(a == b)<<endl;
    cout<<"The value of a != b is "<<(a != b)<<endl;
    cout<<"The value of a >= b is "<<(a >= b)<<endl;
    cout<<"The value of a <= b is "<<(a <= b)<<endl;
    cout<<"The value of a > b is "<<(a > b)<<endl;
    cout<<"The value of a < b is "<<(a < b)<<endl<<endl;

    //logical operators:
    cout<<"Following are the logical operators in C++:"<<endl;
    cout<<"The logical and operator is ((a == b) && (a < b)) is "<<((a == b) && (a < b))<<endl;
    cout<<"The logical or operator is ((a == b) || (a < b)) is "<<((a == b) || (a < b))<<endl;
    cout<<"The logical not operator is (!(a == b)) is "<<(!(a == b))<<endl<<endl;

    return 0;
}
