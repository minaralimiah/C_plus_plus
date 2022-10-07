#include <iostream>
using namespace std;

class Rectangle
{
    private: // Declaraing data as private so it cannot be accessed or modified directly from outside of class
    int length;
    int breadth;

    public:
    //Mutators, this helps to write the data with help of functions
    void setLength(int l)
    {
        if (l>0)
            length = l;
        else 
            {
                length = 0;
                cout<<"invalid Length"<<endl;
            }
    }
    void setBreadth(int b)
    {
        if (b>0)
            breadth = b;
        else 
            {
                // breadth = 0;
                cout<<"invalid Breadth"<<endl;
                exit(0);
            }
    }

    //Mutators this will help to read the data with help of functions.
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    // Common funcitons to calculate area and perimeter with the help of the above data
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;

    // r1.length = 10 Though the data inside class is private it cannot be accessible
    r.setLength(10); // Mutating the data 
    r.setBreadth(-5);
    
    cout<<r.getLength()<<endl; //Accessing the data 
    cout<<r.getBreadth()<<endl;

    // performing operation on the data and getting output 
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}