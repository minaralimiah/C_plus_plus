#include <iostream>
using namespace std;

// Inline fuction will replace the function code with the fuction calling in the main function so, we dont have to go inside other functions and we can save the execution time, This is mainly used when there are so many same functions are used and the function code is small.

inline int product(int a, int b){

    // Do not recommended to use with inline function.
    // static int c = 0; // This executes only once 
    // c = c + 1; // Next time this function will run, the value of c will be retained 

    return a*b; 
}


// Default argument is a type of argument we set in the function argument in the rightmost side and if we dont send any value while calling the function then the default value will be used.
float moneyReceived(int currentMoney, float rate = 1.04){
    return currentMoney * rate;
}

// int strlen(const char *p) if we add the const, it will not let change the value of pointer p by the function, and this type of declaration is called constant argument.

int main(){
    // int a, b;
    // cout<<"Enter the value of a and b:";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    int money;
    cout<<"Enter the amount of money in your bank account:";
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" RS after one year."<<endl;
    cout<<"If your are vip and you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" RS after one year."<<endl;
    return 0;
}