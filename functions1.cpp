#include <iostream>
using namespace std;

// float add( float x, float y ) // Function prototype 
// {
//     float z = x + y; // declarating new variable z inside function and storing the sum of x and y
//     return z; // return the value of z to where it is called
// }

// int main(){
//     float a = 7.3, b = 2.9, c; // declaring and initializing 3 variables
//     c = add(a,b); // calling add function  and passing value of a & b as attribute, storing the return value in c
//     cout<<"sum is "<<c<<endl;
//     return 0;
// }

// find max of 3 no's;

int max( int x, int y, int z )
{
    int max = (x>y) ? (x>z ? x:z) : (y>z ? y:z);
    return max;
}

int main(){
    int x,y,z;
    cout<<"Enter 3 integers:";
    cin>>x>>y>>z;

    // int maximum = max(x,y,z);
    cout<<"The maximum of 3 numbers is "<<max(x,y,z)<<endl;
    return 0;
}