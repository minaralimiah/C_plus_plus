#include <iostream>
using namespace std;

int main(){
    
    int *p = new int[5];
    p[1] = 10;
    p[3] = 9;

    cout<<p[3];
    delete []p;
    p = nullptr;
    return 0;
}