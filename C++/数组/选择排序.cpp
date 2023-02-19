#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[10001];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}