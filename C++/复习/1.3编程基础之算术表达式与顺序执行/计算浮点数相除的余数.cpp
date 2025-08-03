#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    int k;
    cin >> a >> b;
    k = a / b;
    double x;
    x = a - k * b;
    printf("%g", x);
    return 0;
}