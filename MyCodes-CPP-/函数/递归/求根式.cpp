#include <bits/stdc++.h>
using namespace std;
float ans;
float f(float x, int n)
{
    if (n == 1)
        return ans = sqrt(x + 1);
    else
        return ans = sqrt(f(x, n - 1) + n);
}
int main()
{
    int n;
    float x;
    scanf("%f%d", &x, &n);
    printf("%.2f", f(x, n));
    return 0;
}