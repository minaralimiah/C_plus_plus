#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter three no's:";
    cin>>a>>b>>c;

    if (a>b && a>c)
    {
        cout<<"The maximum no is "<<a;
    }
    else
    {
        if (b>c)
            cout<<"The maximum no is "<<b;
        else
            cout<<"The maximum no is "<<c;
    }    

    return 0;
}