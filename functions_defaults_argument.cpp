#include <iostream>
using namespace std;

int max(int a=0, int b=0, int c=0) // These are default arguments, these arguments are previously given to make the no of arguments optional, so one function can be used for different no of arguments.
{
    return (a>b ? (a>c ? a:c): b>c? b:c);
}
int main(){
    
    cout<<max()<<endl;
    cout<<max(3)<<endl;
    cout<<max(5,8)<<endl;
    cout<<max(39,84,99)<<endl;
    // cout<<max(39,34,9,29)<<endl; // we can't use this because no of arguments is more than in the called function.
    return 0;
}