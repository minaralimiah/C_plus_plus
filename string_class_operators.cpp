#include <iostream>
#include <string>

using namespace std;

int main(){
    // string str = "Holiday";
    // cout<<str.at(4)<<endl;
    // cout<<str[4]<<endl;// This two type of operators prints the character in the given index.
    // str.at(4) = 'z'; // this will change the character in any given index.
    // cout<<str<<endl;
    // cout<<str.back()<<endl; // this operator will print the last character in the string object.
    // cout<<str.front()<<endl; // This operator will print the first character in a string

    string str1 = "Hello";
    string str2 = " World";
    // str1 = str1 + str2; // + operator will concatinate two string.
    str1 = str1 + " World, How are you?";
    // str1 = str2; // = operator will copy the right hand string in the left hand string.
    cout<<str1<<endl;

    return 0;
}