#include <iostream>
using namespace std;

class Rectangle{ // Declaration of a class named Rectangle
    
    public: // all classes are private inbuild, so we need to declare them as public to access the materials inside them

    int length;
    int breadth;

    int area(){ // dec area function
        return length*breadth;
    }   

    int perimeter(){ // dec perimeter funciton
        return 2*(length+breadth);
    }
}; // semicolon is mandatory to end the class

int main(){
    Rectangle r1,r2; // Declaring two objects of class Rectangle

    // Initializing the variables of object r1 & r2
    r1.length = 10;
    r1.breadth = 5;
    r2.length = 20;
    r2.breadth = 30;

    // Calling area & perimeter function for object r1 & r2
    cout<<"The area of the rectangle r1 is "<<r1.area()<<endl;
    cout<<"The perimeter of the rectangle r1 is "<<r1.perimeter()<<endl;
    cout<<"The area of the rectangle r2 is "<<r2.area()<<endl;
    cout<<"The perimeter of the rectangle r2 is "<<r2.perimeter()<<endl;

    return 0;
}
