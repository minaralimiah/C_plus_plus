#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"May I know your name? ";
    // cin>>name; It reads only the first word of name
    getline(cin,name);
    cout<<"Welcome Mr."<<name<<endl;
    return 0;
}