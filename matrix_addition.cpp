#include <iostream>
using namespace std;

int main(){ //This program is to find out the sum of two user inputed matrix
    
    int A[2][2], B[2][2], C[2][2];
    cout<<"Enter the elements of matrix A:";//Taking input for matrix A
    for ( int i = 0; i < 2; i++ )
    {
        for ( int j = 0; j < 2; j++ )
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of matrix B:";//Taking input for matrix B
    for ( int i = 0; i < 2; i++ )
    {
        for ( int j = 0; j < 2; j++ )
        {
            cin>>B[i][j];
        }
    }

    for ( int i = 0; i < 2; i++ ) //Adding matrix A and B and assinging at matrix C
    {
        for ( int j = 0; j < 2; j++ )
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for ( int i = 0; i < 2; i++ ) // Printing Matrix C
    {
        for ( int j = 0; j < 2; j++ )
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}