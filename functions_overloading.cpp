#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x+y;
}
float sum(float x, float y)
{
    return x+y;
}
int sum(int x, int y, int z)
{
    return x+y+z;
}
int main(){
    int a = 10, b = 5, c,d;
    float i = 3.9f, j = 3.6f, k;
    c = sum(a,b);
    d = sum(a,b,c);
    k = sum(i,j);
    cout<<c<<endl<<d<<endl<<k<<endl;

    return 0;
}