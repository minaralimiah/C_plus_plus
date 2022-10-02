#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Welcome";
    int count = 0; 
    // for ( int i = 0; str[i] != '\0'; i++ )
    // {
    //     count++; // increasing the value of count with 1 unit as the for loop is going through each character
    // }

    // now using iterator
    string::iterator it;
    for ( it = str.begin(); it != str.end(); it++ )
    {
        count++;
    }
    cout<<"The lenght of the string is "<<count<<endl;
    return 0;
}