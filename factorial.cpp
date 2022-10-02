// This program is to find the factorial of a given number using formula n! = 1 * 2 * 3 * ......* n.
#include <iostream>
using namespace std;

int main(){
    
    int n, fact = 1;
    cout<<"Enter a number you want to get the factorial:";
    cin>>n;

    for ( int i = 1; i <= n; i++)
    {
        fact *=i;
    }
    cout<<n<<"!= "<<fact;
    return 0;
}