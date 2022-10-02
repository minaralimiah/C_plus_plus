// This programme is for the calculation of speed from final and initial velocity
#include <iostream>
using namespace std;

int main(){
    int u, v, a;
    float speed;
    cout<<"Enter the values of initial velocity, final velocity and accelaration:";
    cin>>u>>v>>a;

    speed = (float) (( v*v - u*u )/( 2*a ));
    
    cout<<"The speed is "<<speed<<endl;

    return 0;
}