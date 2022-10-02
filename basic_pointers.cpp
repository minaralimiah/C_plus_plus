#include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    int *p = &a;
    
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    
    // Derefferencing pointer
    cout<<*p<<endl;
    return 0;
}