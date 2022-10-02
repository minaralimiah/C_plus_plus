#include <iostream>
using namespace std;

int main(){
    
    char s1[100];
    char s2[100];

    // cout<<"Enter your name:";
    // cin.get(s1,100);
    // cout<<s1<<endl;

    // cin.ignore(); //This function will ignore all the previous enter as input for the next string

    // cout<<"Enter your name again:";
    // cin.get(s2,100);
    // cout<<s2<<endl;
    // In case of taking multiple strings as input cin.get function cannot  be used directly next fuctions take the enter of previous function as a input.


    // using get.line
    // cin.getline functin takes the entire line along with enters and spaces as inputs, so it does not create any problems as input for the next string input.
    cout<<"Enter your name:";
    cin.getline(s1,100);
    cout<<s1<<endl;

    cout<<"Enter your name again:";
    cin.getline(s2,100);
    cout<<s2<<endl;
    return 0;
}