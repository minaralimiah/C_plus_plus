#include <iostream>
using namespace std;
// this call by address function is used to access the variables of calling function by the outsider functions mainly.

void swap(int *a, int *b) // these are pointer arguments which takes the address of the actual arguments.
{
    int temp = *a; // storing derefference of a in temp 
    *a = *b; // storin derefference of b in derefferene of a means y in x.
    *b = temp; // storing value of temp in derefference of b means y
}
int main(){
    int x = 10, y = 20;
    swap(&x,&y); // passing the address of x & y in the swap function 
    cout<<x<<" "<<y<<endl;
    return 0;
}