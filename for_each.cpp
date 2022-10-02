#include <iostream>
using namespace std;

int main(){ //This program is to show the for each loop to print the things easily. 
    
    int A[5];

    cout<<"Enter the array elements:";
    for ( int i = 0; i < 5; i++ )
    {
        cin>>A[i];
    }

    for ( int x:A )
    {
        cout<<x<<endl;
    }
    return 0;
}