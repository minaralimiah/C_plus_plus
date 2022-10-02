// This programme is the find out the index of a user input key inside a array 
#include <iostream>
using namespace std;

int main(){
    
    int A[10], n = 10, key;

    // Input part
    cout<<"Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    // Printing the Array
    for ( int x:A )
    {
        cout<<x<<" ";
    }
    // Taking the key as input
    cout<<endl<<"Enter the key of which you want  to search the index:";
    cin>>key;

    // Comparison of the key with all the array elements one by one to find out the index
    for (int i = 0; i < n; i++)
    {
        if ( key == A[i])
        {
            cout<<"The key found at index "<<i;
            // exit(0); 
            return 0; // use exit(0) or return 0 to get out of the programe the moment the index is found so the remaining statements in the program after it does not execute.
        }
    }
    cout<<"The key is not found!";
    return 0;
}