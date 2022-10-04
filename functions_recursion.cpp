#include <iostream>
using namespace std;

// int fun( int n ) 
// {
//     if (n>0)
//     {
//         cout<<n<<endl;
//         fun(n-1); // calling the funtion fun from inside of function, and passing n-1, so after some time the condition fails and the condition stops and recursion stop
//     }
// }

// int main(){
//     int x = 5;
//     fun(x);
//     return 0;
// }

void fun( int n )
{
    if (n>0)
    {
        fun(n-1); // In this case though the recursive function is before the printing state, so it will check all the conditions and call the function that many times. After that it will start printing in oposite order, from last condition to previous conditions.
        cout<<n<<endl;
    }
}

int main(){
    int x = 5;
    fun(x);
    return 0;
}