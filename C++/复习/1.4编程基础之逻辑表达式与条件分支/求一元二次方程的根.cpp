#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    double realPart = (-b) / (2 * a);
    if (realPart == -0)
    {
        realPart = 0;
    }
    double imaginaryPart = sqrt(abs(delta)) / (2 * a);
    if (delta == 0)
    {
        cout << "x1=x2=" << fixed << setprecision(5) << realPart << endl;
    }
    else if (delta > 0)
    {
        cout << "x1=" << fixed << setprecision(5) << realPart + imaginaryPart << ";x2=" << realPart - imaginaryPart << endl;
    }

    else
    {
        cout << "x1=" << fixed << setprecision(5) << realPart << "+" << imaginaryPart << "i" << ";x2=" << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}
