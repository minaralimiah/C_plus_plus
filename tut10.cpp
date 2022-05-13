#include <iostream>
using namespace std;
int main(){
    // Example of for loop:
    // for (int i = 1; i <= 1000; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Infinite for loop:
    // for ( int i = 0; 10 < 20; i++)
    // {
    //     cout<<i<<endl;
    // }

    // While loop:
    // int i = 1;
    // while (i <= 100)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // Infinite while loop
    // int i = 1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // Do while loop:
    // int i = 0;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i>0 && i<=10);

    int i = 1;
    do{
        cout<<"6 * "<<i<<" = "<<6*i<<endl;
        i++;
    }while(i>1 && i<=10);   
    return 0;

}