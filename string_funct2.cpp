#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char s1[10] = "Good";
    char s2[10] = "";

    // strcpy(s2,s1); //This function will copy the string s1 in s2
    strncpy(s2,s1,2); //This function will copy the number of characters user has given
    cout<<s2;

    
    return 0;
}