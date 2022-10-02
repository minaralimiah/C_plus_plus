#include <iostream>
using namespace std;

int main(){
    
    int  no;
    cout<<"Enter a no between 1 to 10:";
    cin>>no;

    switch (no)
    {
    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"two";
        break;
    case 3:
        cout<<"three";
        break;
    case 4:
        cout<<"four";
        break;
    case 5:
        cout<<"five";
        break;
    case 6:
        cout<<"six";
        break;
    case 7:
        cout<<"seven";
        break;
    case 8:
        cout<<"eight";
        break;
    case 9:
        cout<<"nine";
        break;
    case 10:
        cout<<"ten";
        break;
    
    default:
        cout<<"Invalid no";
        break;
    }
    
    return 0;
} 