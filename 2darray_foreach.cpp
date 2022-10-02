#include <iostream>
using namespace std;

int main(){
    //This program is to take input of a 2d array from user and print it using for each loop
    
    int A[2][3];
    
    cout<<"Enter elements of the matrix:"; //input
    for ( auto& x:A )
    {
        for ( auto& y:x )
        {
            cin>>y;
        }
    }
    // print
    for ( auto& x:A )
    {
        for ( auto& y:x )
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}