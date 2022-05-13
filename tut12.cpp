#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;

    // & is (Address of ) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * is (value at) Dereference operator.
    cout<<"The value at address of b is "<<*b<<endl;
    cout<<"The value at address of b is "<<a<<endl;

    // Pointer to Pointer:
    int** c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value at address of b is "<<b<<endl;
    cout<<"The value at address of b is "<<*c<<endl;
    cout<<"The value at address value at(value-at(c)) is "<<**c<<endl;
    cout<<"The value at address value at(value-at(c)) is "<<a<<endl;
    return 0;
}