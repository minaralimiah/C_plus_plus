#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x>y?x:y;
}
int min(int x, int y)
{
    return x<y?x:y;
}

int main(){
    int (*fp)(int,int); // Declaration a function pointer, which will hold the address of the function.

    fp = max; // initializing the pointer with address of max fun
    cout<<(*fp)(10,5)<<endl;

    fp = min; // assigning the pointer with address of min fun
    cout<<(*fp)(10,5);

    // this type of pointers are used to call functions of prototype but different operation
    // A function pointer can call all functions  with same signature or prototype

    // This type of pointer functions are used to achive internal function overiding or polymorphism.
    return 0;
}