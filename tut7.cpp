#include <iostream>
using namespace std;

int c = 45;
int main()
{ 
    // int a, b, c; 
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum of a and b is "<<c<<endl;
    // cout<<"The value of global c is "<<::c; 
    // This is scope resolution operator, this is used in this case to denote global variable.


    // ********************Float, double and long double literals********************
    // float d = 34.4f;
    // long double e = 34.4L;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // Sizeof is a keyword which is used to measure the size of variable, how much byte it is consuming on the memory.


    // ********************Refference variable********************

    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y;
    

    // ********************Typecasting********************

    int a = 45;
    float b = 46.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<c<<endl;

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + (int)b<<endl; 
    cout<<"The expression is "<<a + int(b);
    return 0;
}
