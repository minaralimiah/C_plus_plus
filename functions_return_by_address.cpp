#include <iostream>
using namespace std;

int *fun(int size) // creating a pointer function which returns adress of variable
{
    int *p = new int[size]; // dec&in a array in heap using pointer 
    for ( int i = 0; i < size; i++ )
    {
        p[i] = i; // adding content in the array in the heap 
    }
    cout<<p<<endl; // printing the adress stored in p of the array
    return p; // returning the adress to the main function 
}
int main(){
    int size = 5;
    int *q = fun(size); // dec pointer q & assinging it with function call fun. 
    cout<<q<<endl; // This will print the same address as p in the fun function
    for ( int i = 0; i < size; i++ )
    {
        cout<<q[i]<<" ";
    }
    return 0;
}