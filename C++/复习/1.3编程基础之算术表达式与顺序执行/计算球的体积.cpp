#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    double pi = 3.14;
    cin >> r;
    double v = pi * r * r * r;
    v = v * 4 / 3;
    printf("%.2lf\n", v);
    return 0;
}