#include <bits/stdc++.h>
using namespace std;
void meishigan(int x)
{
    int a[32], i = 0, cnt = 0;
    while (x != 0)
    {
        int m = x % 2;
        if (m == 1)
        {
            a[cnt] = i;
            cnt++;
        }
        x /= 2;
        i++;
    }
    for (i = cnt - 1; i >= 0; i--)
    {
        if (a[i] == 0)
            printf("2(0)");
        else if (a[i] == 1)
            printf("2");
        else if (a[i] == 2)
            printf("2(2)");
        else
        {
            printf("2(");
            meishigan(a[i]);
            printf(")");
        }
        if (i != 0)
            printf("+");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    meishigan(n);
    return 0;
}