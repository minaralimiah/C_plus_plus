#include <iostream>
using namespace std;

int main(){

    int A[5] {2, 4, 6, 8, 10};
    int *p = A;

    cout<<p<<endl;
    for ( int i = 0; i < 5; i++ )
    {
        // cout<<A[i]<<" ";
        // cout<<i[A]<<" ";
        // cout<<p[i]<<" ";
        // cout<<*(A+i)<<" ";
        // cout<<*(p+i)<<" ";
        // cout<<(A+i)<<" ";
        // cout<<(p+i)<<" ";
        // cout<<(p+i)<<" ";

        cout<<*p<<endl;
        p++;
    }
    return 0;
}