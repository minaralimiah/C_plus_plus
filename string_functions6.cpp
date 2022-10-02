// This programe is to convert integer and float inside a string to long integer and float. 

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char s1[10] = "235";
    char s2[10] = "58.30";

    long int x = strtol(s1,NULL,10);
    float y = strtof(s2,NULL);

    cout<<x<<endl<<y<<endl;
    return 0;
}