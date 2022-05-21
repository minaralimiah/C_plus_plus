#include <iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"using function with three arguments."<<endl;
    return a+b+c;
}

// Calculating volume of a cylinder
float volume(double r, int h){
    return (3.14*r*r*h);
}

// Calculatin volue of cube
int volume(int a){
    return (a*a*a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 3, 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3, 4 and 5 is "<<sum(3, 4, 5)<<endl;

    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}