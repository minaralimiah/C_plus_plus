#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a number you want to get multiplication table from 1 to 10:";
    cin>>n;

    for ( int i = 1; i <= 10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    
    return 0;
}