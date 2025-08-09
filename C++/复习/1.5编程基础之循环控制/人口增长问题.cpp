#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    int y;
    cin >> x >> y;
    for (int i = 1; i <= y; i++)
    {
        x = x * 1.001;
    }
    printf("%.4lf", x);
    return 0;
}