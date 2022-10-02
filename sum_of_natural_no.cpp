#include <iostream>
using namespace std;

int main(){ // This is the programme to find the sum of first n natural no's using for loop
    
    int n, sum = 0;
    cout<<"Enter n:";
    cin>>n;

    for ( int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    cout<<"The sum of the first N natural no's is "<<sum;
    return 0;
}