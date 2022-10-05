#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length; 
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }


};

int main(){
    // In this method we are declaring a object of class rectangle with name r , and assigning its adress to pointer p of clas rectangle.
    // Rectangle r;
    // Rectangle *p; // declaring a pointer of class p
    // p = &r; // storing address of object r in pointer p
    
    // In this method we will directly create a dynamic object inside heap.
    Rectangle *p = new Rectangle();
    
    p->length = 10;
    p->breadth = 5;

    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;

    return 0;

}