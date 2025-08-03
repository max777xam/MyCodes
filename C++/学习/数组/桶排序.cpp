#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[10001], x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        a[x]++;
    }
    for (int i = 1; i <= x; i++)
    {
        if (a[i])
        {
            while (a[i])
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    return 0;
}