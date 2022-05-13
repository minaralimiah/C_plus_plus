#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // const int a = 3;
    // cout<<"The value of a is "<<a<<endl;
    // a = 5; Though a is a contant , so a new value cannot be assigned in a.

    int a = 7, b = 89, c = 1938;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl<<endl;
    // endl is a manipulator which is used to change the line.

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;
    // setw(n) is also a manipulator which is used to arrange the out put in same order, we have to put the value of n same as the last output, so it will be arranged properly AND ALSO VERY IMOPORTANTLY IF WE DONT INCLUDE  (iomanip) HEADER FILE IT WILL NOT WORK.


    // Operator precedence.
    

    return 0;
}