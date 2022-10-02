#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    // char s1[20] = "programming";
    // char s2[20] = "gram";
    
    // cout<<strstr(s1,s2); // This function is print the substring along with all the remaining characters 
    char s1[20] = "programming";
    char s2[20] = "kite";

    if ( strstr(s1,s2) != NULL )
    {
        cout<<strstr(s1,s2);
    }
    else cout<<"sub string Not found";
    
    return 0;
}