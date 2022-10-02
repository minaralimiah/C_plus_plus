#include <iostream>
using namespace std;

template <class T> // T is a defined as a template class, so we can use same for different types of data types. 
T maximum(T x, T y)
{
    return (x>y ? x:y);
}
int main(){
    
    int a = maximum(3,8);
    float b = maximum(3.5f,9.3f);
    cout<<a<<endl<<b<<endl;
    
    return 0;
}