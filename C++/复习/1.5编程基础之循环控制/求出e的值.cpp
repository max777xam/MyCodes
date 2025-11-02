#include <bits/stdc++.h>
using namespace std;
int main()
{
    double e = 1.0, t = 1.0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t *= 1.0 / i;
        e += t;
    }
    printf("%.10lf", e);
    return 0;
}