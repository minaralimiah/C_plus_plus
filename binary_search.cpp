// This program is the find out the key from an array using binary search
#include <iostream>
using namespace std;

int main(){
    
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 9, mid, key;

    cout<<"Enter a key:";
    cin>>key;

    while ( l <= h)
    {
        mid = ( l + h )/2;
        if ( key == A[mid])
        {
            cout<<"The key is found at index "<<mid;
            exit(0);
        }
        else if ( key > A[mid] )
            l = mid +1 ;
        else 
            h = mid - 1;
    }

    cout<<"The key is not found";
    return 0;
}