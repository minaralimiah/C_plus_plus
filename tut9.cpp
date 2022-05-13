#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age:";
    cin>>age;

    // SELECTION CONTROL STRUCTURE-if else:
    // if ((age < 18) && (age > 0))
    // {
    //     cout<<"You can not come to the party."<<endl;
    // }
    // else if (age < 1)
    // {
    //     cout<<"You are not born yet."<<endl;
    // }
    // else if (age == 18)
    // {
    //     cout<<"You are a kid so you will get a kid pass for the party."<<endl;
    // }
    // else if (age > 18)
    // {
    //     cout<<"You can come to the party."<<endl;
    // }

    // BASIC CONTROL STRUCTURES_SWITCH CASE STATEMENTS:

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No special case"<<endl;
        break;
    }
    cout<<"You are done with swith case";
    return 0;
}