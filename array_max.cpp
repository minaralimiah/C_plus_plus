// This programme is to find out the maximum element of an array.
#include <iostream>
using namespace std;

int main(){
    
    int A[7] = { 4, 8, 6, 9, 5, 2, 7};
    int n = 7, max;
    max = A[0];

    for ( int i = 1; i < n; i++ )
    {
        if ( A[i] > max )
        {
            max = A[i];
        }
    }

    cout<<"The maximum element is this array is "<<max;
    
    return 0;
}           