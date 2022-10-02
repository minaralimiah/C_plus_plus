#include <iostream>
using namespace std;

int main(){
    
    // char S[20];
    // cout<<"Enter your name";
    // cin>>S; // This normal method cannot read strings with spaces
    // cout<<S;

    char s[50];
    cout<<"Enter your name:";
    // cin.get(s,20); 
    cin.getline(s,10); // this function cannot take characters more than 10
    cout<<s;
    return 0;
}