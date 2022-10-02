#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string str = "today";
    // string::iterator it; // Declaration of a iterator 
    // for ( it = str.begin(); it != str.end(); it++ ) // iterating through the entire sting using for loop
    // {
    //     // cout<<*it<<" ";
    //     cout<<(*it = *it-32)<<" "; // as well as accesing we can also modify the string characters us
    // }

    // string::reverse_iterator it; // Declaration of a reverse iterator 
    // // for ( it = str.rbegin(); it != str.rend(); it++ ) // reverse iterating through the entire sting using for loop in oposite direction.
    // {
    //     cout<<*it<<" "; 
    // }

    for ( int i = 0; str[i] != '\0'; i++ ) // printing the characters of a string using for loop
    {
        cout<<str[i]<<" ";
    }
    return 0;
}