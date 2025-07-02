#include <bits/stdc++.h>
using namespace std;
int a[10001][6], b[10001];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            scanf("%d", &a[i][j]);
            a[i][4] += a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        a[i][5] = 1;
        for (int j = 0; j <= n; j++)
        {
            if (a[i][4] < a[j][4])
                a[i][5]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}