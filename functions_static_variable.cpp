#include <iostream>
using namespace std;

void fun(){
    static int s = 10; // if we declare this variable as static variable, it will allways consume the memory slot until the program ends, then in this case, how many no of times we call the function, it will use the same variable previously created, and performs its operations on that.
    s++;
    cout<<s<<endl;
}
int main(){
    fun();
    fun();
    
}
