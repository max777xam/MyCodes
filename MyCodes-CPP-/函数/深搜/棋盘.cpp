#include <bits/stdc++.h>
using namespace std;
int n, m, f[105][105];
int tu[105][105];
int sx[4] = {-1, 0, 1, 0}, sy[4] = {0, -1, 0, 1};
void dfs(int x, int y, int money, int color, bool magic)
{
    if (money >= f[x][y])
        return;
    f[x][y] = money;
    for (int i = 0; i <= 3; i++)
    {
        if (tu[x + sx[i]][y + sy[i]] == 0)
        {
            if (!magic)
                dfs(x + sx[i], y + sy[i], money + 2, color, 1);
            continue;
        }
        else
        {
            if (tu[x + sx[i]][y + sy[i]] == color)
                dfs(x + sx[i], y + sy[i], money, tu[x + sx[i]][y + sy[i]], 0);
            if (tu[x + sx[i]][y + sy[i]] != color)
                dfs(x + sx[i], y + sy[i], money + 1, tu[x + sx[i]][y + sy[i]], 0);
        }
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f[i][j] = INT_MAX;
    for (int i = 1; i <= m; i++)
    {
        int x, y, color;
        scanf("%d%d%d", &x, &y, &color);
        tu[x][y] = color + 1;
    }
    dfs(1, 1, 0, tu[1][1], 0);
    if (f[n][n] == INT_MAX)
    {
        printf("-1\n");
        return 0;
    }
    else
        printf("%d\n", f[n][n]);
    return 0;
}
