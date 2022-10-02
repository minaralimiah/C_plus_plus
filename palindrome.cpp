// this is to check whether a number is palindrome or not
#include <iostream>
using namespace std;

int main()
{

    int n, r, m, rev = 0;
    cout << "Enter a number:";
    cin >> n;
    m = n;
    
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    if (rev == m)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}