#include <iostream>
#include <string>

using namespace std;

int main(){
    // string str = "Hello";
    // cout<<str.capacity()<<endl;
    // str.append(" World is the first programe done by most of the programmers all over the world."); // This function will add the new string in the main string.
    // cout<<str<<endl;
    // cout<<str.capacity()<<endl<<str.length()<<endl;

    // str.insert(3,"kk"); // this function call will add the kk string in the 3rd index of str string.

    // string str1 = "How you?";
    // str1.insert(3," areal",4); // This function will insert the no of chracter user wants to insert from the new string to main string at any index.
    // cout<<str1<<endl;

    // string str = "programming";
    // str.replace(3,4,"KK"); // This function will replace user wanted portion of string with a new string of same or different size.
    // cout<<str<<endl;

    // string str = "Hello World";
    // // str.erase(); // This function erases the string same as clear
    // // str.push_back('H'); // this function can add a character in the last of the string.
    // str.pop_back(); // This function deletes the last character of a string like a backspace.
    // cout<<str<<endl;

    string str1 = "Programming";
    string str2 = "Language";
    str1.swap(str2); // this function swaps two strings 
    cout<<str1<<endl<<str2<<endl;

    
    return 0;
}