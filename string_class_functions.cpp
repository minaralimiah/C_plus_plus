#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello"; // declaration and initialization of str object of string class.

    // cout<<str.length()<<endl; // this function shows length of object str
    // cout<<str.size()<<endl; // same as above
    // cout<<str.capacity()<<endl; // this shows the total storing cpacity of the str object

    str.resize(30); // this function resizes the capacity of the object
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl; // this prints the maximum capacity of any string object in my compiler

    str.clear(); // this will clear the string.
    cout<<str<<endl;
     // This will determine whether the string is empty or not
    
    if ( str.empty())
        cout<<"The string is empty"<<endl;
    else cout<<"The string is "<<str<<endl;
    return 0;
}