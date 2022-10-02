#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // string s1 = "Hello";
    // cout<<s1<<endl;
    string str;
    cout<<"Enter a string:";
    // cin>>str;//This cannot more than one words together.
    // getline(cin,str);
    cin>>str;
    cout<<str<<endl;
    cin>>str;
    cout<<str<<endl;
    // using this declaration we we can take multiple inputs together with out the next line input problem.
    return 0;
}