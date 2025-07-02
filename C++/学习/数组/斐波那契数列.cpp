#include <bits/stdc++.h>
using namespace std;
int a = 0, b = 1, c, n;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a);
        c = a;
        a = b;
        b = c + b;
    }
    return 0;
}