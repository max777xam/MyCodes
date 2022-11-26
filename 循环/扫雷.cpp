#include <bits/stdc++.h>
using namespace std;
int n, m, p, a[10001][10001], x, y, r, c, u[8][2] = {-1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 1, -1, 0, -1, -1, -1};
int main()
{
    scanf("%d%d%d", &n, &m, &p);
    for (int k = 1; k <= p; k++)
    {
        scanf("%d%d", &x, &y);
        a[x][y] = -1;
        for (int i = 0; i < 8; i++)
        {
            r = x + u[i][0];
            c = y + u[i][1];
            if (r >= 1 && r <= n && c >= 1 && c <= m && a[r][c] != -1)
                a[r][c]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == -1)
                printf("*");
            else
                printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}