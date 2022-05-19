#include <iostream>
using namespace std;
// struct employee
// {
//     int  eid;
//     char favChar;
//     float salary;
// };

// int main(){
//     struct employee minar;
//     minar.eid = 1;
//     minar.favChar = 'c';
//     minar.salary = 50000;

//     cout<<"Minar's eid  is "<<minar.eid<<endl;
//     cout<<"Minar's favChar  is "<<minar.favChar<<endl;
//     cout<<"Minar's salary  is "<<minar.salary<<endl;
    
// typedef struct employee // typedef is used decrease the syntax for convinience.
// {
//     int  eid;
//     char favChar;
//     float salary;
// }st;

// int main(){
//     st minar; // we are using new name st to denote minar as a new employee struct by typedef
//     minar.eid = 1;
//     minar.favChar = 'c';
//     minar.salary = 50000;

//     cout<<"Minar's eid  is "<<minar.eid<<endl;
//     cout<<"Minar's favChar  is "<<minar.favChar<<endl;
//     cout<<"Minar's salary  is "<<minar.salary<<endl;


    // return 0;


// }

// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };
// int main(){
//     union money m1;
//     m1.rice = 30;
//     m1.car = 'l'; //we cannot use to enum variable together it will give garbage value
//     cout<<m1.rice<<endl;

    
//     return 0;
// }


//Enums:It will arrange the enum types in a list
int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}