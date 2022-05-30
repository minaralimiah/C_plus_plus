#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"May I know your name:";
    // cin>>name; only reads first word of my name
    getline(cin,name);
    cout<<"Your name is Mr."<<name;

    return 0;
}