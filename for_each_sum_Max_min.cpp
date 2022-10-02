#include <iostream>
#include <climits>
using namespace std;

int main(){
    
    int A[10] = { 1, 3, 8, 9, 1, 5, 70, 6, 38, 59};
    int n = 10, sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    for ( int x:A )
    {
        cout<<x<<" ";
        sum += x;

        if ( x > max)
        {
            max = x;
        }
        else if ( x < min)
        {
            min = x;
        }
    }
    cout<<endl<<"Sum of the elements is "<<sum;
    cout<<endl<<"The minimum no is "<<min;
    cout<<endl<<"The maximum no is "<<max;
    return 0;
}