// This program is the find out whether a no is armstrong or not.
#include <iostream>
using namespace std;

int main(){
    
    int n, r, m, sum = 0;
    cout<<"Enter a number: ";
    cin>>n;
    m = n;

    while ( n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum += r*r*r;
    }

    if (sum == m) cout<<"Armstrong";
    else          cout<<"Not Armstrong";

    return 0;
}