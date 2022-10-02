#include <iostream>
#include <string>
using namespace std;

int main(){

    // string s = "Welcome";
    // char str[10];
    // // s.copy(str,s.length()); // This function will copy the whole string in the character array.
    // s.copy(str,3); // this will copy the no of elments user want.
    // str[3] = '\0'; // we have to store null character after the end of string if the compiler automatically doesn't stores.
    // cout<<str<<endl;


    // string str = "How are you";
    // cout<<str.find("are")<<endl; // this will find the index of the string from left side.
    // cout<<str.find('y')<<endl;
    // cout<<str.find('o')<<endl;
    // cout<<str.rfind('o')<<endl;// This will find the index from right side.
    // cout<<str.find('k')<<endl; // though this character is not present in this string, so this function will out invalid index.

    // string str = "Hello World";

    // cout<<str.find_first_of('l')<<endl; // this function will search for the character in the string
    // cout<<str.find_last_of('l')<<endl;
    // cout<<str.find_first_of('l',3)<<endl; // this function will search for the character in the string starting from the index, argument given as 
    // cout<<str.find_first_of('l',4)<<endl;
    
    // cout<<str.find_first_of('le')<<endl; // this will search the all the characters given togethe as argument in the string.

    // string str = "programming";
    // cout<<str.substr(3)<<endl; // this will print the remaining string from the given index.
    // cout<<str.substr(3,4)<<endl; // this will print any portion of a string

    string str1 = "morning";
    string str2 = "evening";

    cout<<str1.compare(str2)<<endl;
    return 0;
}