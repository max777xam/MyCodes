#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[10001], x, fg;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
        {
            fg = i;
            break;
        }
    }
    for (int i = n; i >= fg; i--)
    {
        a[i + 1] = a[i];
    }
    a[fg] = x;
    for (int i = 1; i <= n + 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}