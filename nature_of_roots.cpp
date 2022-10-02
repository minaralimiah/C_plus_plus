#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, d, r1, r2;
    cout << "Enter the value of the coefficients: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    cout << "The value of discriminant  is " << d << endl;

    if (d == 0)
    {
        cout << "The roots are real and equal" << endl;
        cout << "The roots are " << r1 << " & " << r2 << endl;
    }
    else if (d > 0)
    {
        cout << "The roots are real but unequal" << endl;
        cout << "The roots are " << r1 << " & " << r2 << endl;
    }
    else
    {
        cout << "The roots are imaginary" << endl;
    }

    return 0;
}