// This program is to find out whether a no is perfect no or not
#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cout << "Enter the no:";
    cin >> n; // Taking the no as input and storing in variable n

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (2 * n == sum)
        cout << "The number is perfect";
    else
        cout << "The number is not perfect";

    return 0;
}