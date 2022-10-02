#include <iostream>
 #include <cstring> //(string.h) // This header file will allow the use of string functions
using namespace std;

int main(){
    
    char s1[20] = "Good";
    char s2[10] = " Morning";

    // strcat(s1,s2); // This function will concatinate the s2 string after s1 string inside s1 string.

    strncat (s1,s2,3); //This function wil concatinate the number of character user want to concatinate.
    cout<<s1;
    return 0;
}