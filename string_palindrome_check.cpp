#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "mAdaM"; // Declaring & initializing a string named str
    string rev = ""; // Declaring & initializing an empty string rev
    int len = (int)str.length(); // storing length of str string in len var 
    rev.resize(len); // resizing the rev string with the lenght of str 

    for ( int i = 0,j = len-1; i < len,j >= 0; i++,j-- )
    {
        rev[i] = str[j]; // copying the str string in rev in reverse order.
    }
    cout<<rev<<endl; // printing the  reversed string

    // if ( str.compare(rev) == 0 )
    //     cout<<"The string is palindrome"<<endl;
    // else 
    //     cout<<"The string is not palindrome"<<endl;

    // Now for upper and lower case mixed words:
    
    for ( int i = 0; i < len; i++ ) // converting the strings in upper case
    {
        if ( str[i] >= 97 && str[i] <= 122 )
        {
            str[i] = str[i] - 32;
        }
        
    }
    
    for ( int i = 0; i < len; i++ ) 
    {
       if (  rev[i] >= 97 && rev[i] <= 122 )
        {
            rev[i] = rev[i] - 32;
        } 
    }

    cout<<str<<" "<<rev<<endl; // checking both the strings again

    // compareing two string     
    if ( str.compare(rev) == 0 )
        cout<<"The string is palindrome"<<endl;
    else 
        cout<<"The string is not palindrome"<<endl;

    return 0;
}