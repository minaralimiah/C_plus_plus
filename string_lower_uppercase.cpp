#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "WelCome5";
    for ( int i = 0; str[i] != '\0'; i++ )
    {
        if ( str[i] >= 97 && str[i] <= 122 )
        {
            str[i] = str[i] - 32;
        }  
        // else if ( str[i] > 0 && str[i] < 65 )    
        //     continue;
    }
    cout<<str<<endl;
    return 0;
}