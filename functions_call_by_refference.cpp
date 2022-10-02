#include <iostream>
using namespace std;

void swap(int &x, int &y) // These are refference arguments, we are giving only another name as x and y to a and b.
// In this case no machine code for separate function will be generated, The machine code of swap function will be copied inside the main function. 
// This method is only useful for simple functions 
{
    int temp = x;
    x = y;
    y = temp;
}

int main (){
    int a = 10, b = 20; // dec&in x &y
    swap(a,b);
    cout<<a<<" "<<b<<endl; 
    return 0;
}