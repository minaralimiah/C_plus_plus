#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[20] = "programming";
    cout<<strchr(s,'m')<<endl; // This function prints the occurence of character from left hand side
    cout<<strrchr(s,'m'); // This function prints the occurence of character from right hand side
    return 0;
}