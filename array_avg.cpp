#include <iostream>
using namespace std;

int main(){
    int A[10] = { 2, 8, 9, 10 , 71, 19, 8, 9, 11, 31 };
    int sum = 0;
    float avg;

    for ( auto x:A )
    {
        sum += x;
    }
    avg = sum/10;
    cout<<"The avg of all the elements in this array is "<<avg;
    
    return 0;
}