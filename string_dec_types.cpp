#include <iostream>
using namespace std;

int main(){
    //Some of the declaration types of string using char array and string class

    // char S[10] = "Hello";
    // char S[] = "Hello";
    // char S[] = {'H', 'e', 'l', 'l', 'o','\0'};
    // char S[] = {65, 66, 67, 68, '\0'};

    // char *S = "Hello"; not works for modern compilers 
    string S = "Hello"; //declaraing and initializing string using string class


    cout<<S;
    return 0;
}