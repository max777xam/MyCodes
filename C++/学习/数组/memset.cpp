#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    memset(a, -1, sizeof(a));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}