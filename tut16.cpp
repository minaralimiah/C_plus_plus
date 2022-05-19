#include <iostream>
using namespace std;

// void swap(int a, int b){ this will not work because this variables are temporary and the changes also
//     int temp = a;
//     a = b;
//     b = temp;
// }

void swap_pointer(int* a, int* b){ // Call by reference using pointer.
    int temp = *a; 
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variables.
// void swapReferenceVar(int &a, int &b){ // Call by reference using pointer.
//     a = b;
//     int temp = a; 
//     b = temp;
int &swapReferenceVar(int &a, int &b){ // Call by reference using pointer.
    a = b;
    int temp = a; 
    b = temp;
    return a;
}
int main(){
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<< " and the value of y is "<<y<<endl;
    // swap(x, y); this will not able to swap x and y.

    // swap_pointer(&x, &y); This will swap a and b using pointer reference 

    // swapReferenceVar(x, y); // This will swap a and b using pointer reference variables.
    swapReferenceVar(x, y) = 786;  


    cout<<"The value of x is "<<x<< " and the value of y is "<<y<<endl;
    return 0;
} //This is the change