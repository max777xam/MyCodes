#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    int a, b, c;
    scanf("%d", &m);
    a = m / 100;
    b = (m - a * 100) / 10;
    c = m % 10;
    cout << c << b << a << endl;
    return 0;
}