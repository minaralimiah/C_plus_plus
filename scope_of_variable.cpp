#include <iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    bool is_true = false;
    glo = 78;
    sum(); // External function when dont able to find the value of the variable declared inside it, it will print the global value of that variable.

    cout<<"\n"<<glo; // In this case the the local and the last value of the glo variable is preffered, this is actually the order.  

    cout<<"\n"<<is_true;
    return 0;

}

