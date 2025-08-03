#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r, d, c, s;
    double pi = 3.14159;
    cin >> r;
    d = r * 2;
    c = d * pi;
    s = pi * r * r;
    printf("%.4lf %.4lf %.4lf\n", d, c, s);
    return 0;
}