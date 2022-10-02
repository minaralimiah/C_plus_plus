#include <iostream>
#include <string>
using namespace std;

int main(){

    string email;
    cout<<"Enter your email id:";
    getline(cin,email);
    
    // cout<<email.find('@');
    int index = (int)email.find('@');

    cout<<"User name is:"<<email.substr(0,index)<<endl;
    return 0;
}