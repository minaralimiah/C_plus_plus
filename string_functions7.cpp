#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "x=10;y=20;z=35";

    // cout<<strtok(s1,"=;"); // strtok function is used to tokenize strings part wise
    char *token = strtok(s1,";");

    while ( token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL, ";"); //This time we have to pass the NULL because it has already taken the s1 string, and this this it will again start in s1
    }
    

    return 0;
}