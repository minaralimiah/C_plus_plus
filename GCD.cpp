// This program is to find out the greatest common diviser of two numbers
#include <iostream>
using namespace std;

int main(){
    
    int m, n;
    cout<<"Enter the value of two numbers:";
    cin>>m>>n;

    while ( m != n)
    {
        if ( m > n)
            m = m - n;
        else if ( n > m)
            n = n - m;
    }
    cout<<"The value of GCD is "<<m;
    return 0;
}