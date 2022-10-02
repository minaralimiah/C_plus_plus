#include <iostream>
using namespace std;

void swap(int x, int y) // creating a void swap function to swap two numbers, x & y is here the acutual parameters 
{
    cout<<x<<" "<<y<<endl; // printing them before swaping 
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl; // printing them after swaping
}

int main (){
    int a = 10, b = 20; // dec&in x &y
    swap(a,b);
    cout<<a<<" "<<b<<endl; // printing them after passing argument in the swap function, as we know from for swap type of functions call by value cannot be useful
    // In this case the passed arguments will only change for the time the swap function will use it, the values inside the main function will remain untouched.
    return 0;
}