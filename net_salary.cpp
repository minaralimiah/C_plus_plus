#include <iostream>
using namespace std;

int main(){
    
    float basic_salary, allowance, deduction, net_salary;

    cout<<"Enter your basic salary:";
    cin>>basic_salary;
    cout<<"Enter your allowance percentage:";
    cin>>allowance;
    cout<<"Enter your deductions percentage:";
    cin>>deduction;
    
    net_salary = basic_salary + basic_salary*allowance/100 - basic_salary*deduction/100;
    cout<<"Your net salary is:"<<net_salary<<endl;
    

    return 0;
}