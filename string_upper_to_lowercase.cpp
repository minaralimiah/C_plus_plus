#include <iostream>
#include <string>
using namespace std;

int main(){
    // string str = "WELCOME";

    // This method is to converting the string to lowecase also as different characters.
    // for ( int i = 0; str[i] != '\0'; i++ )
    // {
    //     cout<<(char)((int)str[i]+32);
    // }

    // for ( int i = 0; str[i] != '\0'; i++ )
    // {
    //     str[i] = str[i] + 32;
    // }
    // cout<<str<<endl;

    string str = "WElcOmE";

    for ( int i = 0; str[i] != '\0'; i++ )
    {
        if (str[i] >=65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    cout<<str<<endl;
    return 0;
}