// This programme is to convert the number in words and display it
#include <iostream>
using namespace std;

int main(){
    
    int n, r1, r2, rev = 0;
    cout<<"Enter value of n:";
    cin>>n;

    while ( n != 0)
    {
        r1 = n % 10;
        n = n / 10;
        rev = rev * 10 + r1;
    }
    cout<<rev<<endl;
    while ( rev != 0)
    {
        r2 = rev % 10;
        rev = rev / 10;

        switch (r2)
        {
        case 1:
            cout<<"one"<<" ";
            break;
        case 2:
            cout<<"two"<<" ";
            break;
        case 3:
            cout<<"three"<<" ";
            break;
        case 4:
            cout<<"four"<<" ";
            break;
        case 5:
            cout<<"five"<<" ";
            break;
        case 6:
            cout<<"six"<<" ";
            break;
        case 7:
            cout<<"seven"<<" ";
            break;
        case 8:
            cout<<"eight"<<" ";
            break;
        case 9:
            cout<<"nine"<<" ";
            break;
        
        default:
            break;
        }
    }
    return 0;
}