#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char s1[20], s2[20];
    cout<<"Enter string s1 and s2:";
    cin>>s1>>s2;

    if ( strcmp(s1,s2) == 0)
        cout<<"Two strings are equal"<<endl;
    else if ( strcmp(s1,s2) >= 0 )
        cout<<"s1 is greater than s2"<<endl;
    else   
        cout<<"s2 is greater than s1"<<endl;


    return 0;
}