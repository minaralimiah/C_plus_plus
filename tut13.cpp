#include <iostream>
using namespace std;

int main(){
    int marks[] = {29, 23, 59, 55};
    int mathMarks[4];
    // mathMarks[0]=2934;
    // mathMarks[1]=239;
    // mathMarks[2]=934;
    // mathMarks[3]=34;
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<"These are mathMarks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of mathMarks["<<i<<"] is "<<mathMarks[i]<<endl;
    // }
    

    // Changing the value of the array 
    // marks[0] = 0;
    // cout<<marks[0]<<endl;

    // Pointers on arrays
    int* p = marks;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of (*p+1) is "<<(*p+1)<<endl;
    cout<<"The value of (*p+2) is "<<(*p+2)<<endl;
    cout<<"The value of (*p+3) is "<<(*p+3)<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<*p+i<<endl;
    }
    
    return 0;
}