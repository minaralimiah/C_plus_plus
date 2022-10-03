#include <iostream>
using namespace std;

int & fun(int &a) // This type of function will return reference, here &a is taking the x argument and a is becoming a reference to x
{
    cout<<a<<endl;
    return a; // This is returning a reference to x
}
int main(){
    int x = 10;
    fun(x) = 25; // Here by calling fun with x attribute we are actually getting a refference to x. so in this rare case we can take the function in L.H.S and store different value, which will be actually stored in the x

    cout<<x<<endl;
    return 0;
}