#include <iostream>
using namespace std;

int factorial(int n){
    if (n <= 1)
        return 1;
    else 
        return n * factorial(n-1);
}

int fib(int n){
    if (n <= 2)
    {
        return 1;
    }       
    return fib(n-2) + fib(n-1);
}
// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!

    int num;
    cout<<"Enter a number:";
    cin>>num;
    // cout<<"The factorial of the entered number is "<<factorial(num)<<endl;
    cout<<"The tem in fibonacci series in num th position is "<<fib(num)<<endl;
    for (int i = 1; i <= num; i++)
    {
        cout<<fib(i)<<",";
    }
    return 0;
}