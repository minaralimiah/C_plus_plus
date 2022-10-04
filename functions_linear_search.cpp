#include <iostream>
using namespace std;

int search(int A[], int n, int key){
    
    for ( int i = 0; i < n; i++ )
    {
        if ( key == A[i])
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int A[] = {3, 4, 9, 5, 10, 16, 30};
    int key;
    cout<<"Enter the element you want to find index:";
    cin>>key;
    int n = size(A);

    int index = search(A,n,key);
    if ( index >= 0 )
        cout<<"The element is present at index "<<index<<endl;
    else
        cout<<"The element is present not present"<<endl;
    
    return 0;
}