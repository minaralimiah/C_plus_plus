#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    int &y = x; // Adress of x or l value of x is assinged in y;

    cout<<x<<endl;
    x++;
    y++;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
    return 0;
}