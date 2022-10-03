#include <iostream>
using namespace std;

// int g = 5; // in&dec of global var
// void fun(){
//     int g = 10; // This is a local variable so due to declaration of this compiler will prefer this local variable inside this fun function. & perform the operations on this only. 
    
//     { // Declaration of block, no one can access the variable inside of the block
//         int g = 0;
//         g++;
//         cout<<g<<endl;
//     }
//     g++;
//     cout<<g<<endl;
// }

// int main(){
//     cout<<g<<endl;
//     fun();
//     cout<<g<<endl;
//     return 0; 
// }

// Scoping rules:
int x = 10;
int main(){
    int x = 20;
    {
        int x = 30;
        cout<<x<<endl;// This x will access its nearest scope which is declared inside this block 
    }
    cout<<x<<endl; // This x will acces its nearest the x declared inside this function.

    // Still if we want to access the global x, after declaring another x inside the function 
    cout<<::x<<endl; // We have to use scope resolution operator                        
    
}