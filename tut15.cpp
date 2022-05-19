#include <iostream>
using namespace std;

// Function prototype:
// type funtion-name (arguments)
// int sum(int a, int b); --Acceptable
// int sum(int a, b) --Not acceptable
int sum(int, int); // Acceptable
void g();

int main(){
    int num1, num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;

    cout<<"The sum of two numbers is "<<sum(num1, num2)<<endl;
    // num1 and num2 are actual parameter for the sum function
    g();
    return 0;
}

int sum(int a, int b){
    // a and b are the formal parameter of the actual parameter of num1 and num2
    int c = a + b;
    return c; 
}
void g(){
    cout<<"Hello good evening";
}