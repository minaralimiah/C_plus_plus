#include <iostream>
using namespace std;

int main(){
    // Example of break:
    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i == 2)
    //     {
    //         break; // break will get out of the loop when value of i reach 2.
    //     }
    //     cout<<i<<endl;
    // }

    // Example of continue:
    for (int i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue; // continue will skip the time when it will be used, in this case it skipped the value of 2.
        }
        cout<<i<<endl;
    }
    
    return 0;
}