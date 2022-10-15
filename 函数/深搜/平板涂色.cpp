#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};
using namespace std;
struct squares
{
    int x1, y1, x2, y2;
    int color;
} broads[20];
bool vis[20];
bool G[40][40];
int res = INT_MAX;
bool check(int x)
{
    if (broads[x].x1 == 0)
        return true;
    for (int i = broads[x].y1 + 1; i <= broads[x].y2; i++)
        if (G[broads[x].x1][i] == 0)
            return false;
    return true;
}
void update(int x, int sta)
{
    for (int i = broads[x].x1 + 1; i <= broads[x].x2; i++)
        for (int j = broads[x].y1 + 1; j <= broads[x].y2; j++)
            G[i][j] = sta;
}
void dfs(int p, int k, int num, int n)
{
    if (k > res)
        return;
    if (num == n)
        res = min(res, k);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && check(i))
        {
            update(i, 1);
            vis[i] = true;
            num++;
            if (broads[i].color == broads[p].color)
                dfs(i, k, num, n);
            else
            {
                k++;
                dfs(i, k, num, n);
                k--;
            }
            update(i, 0);
            vis[i] = false;
            num--;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d%d%d%d%d", &broads[i].x1, &broads[i].y1, &broads[i].x2, &broads[i].y2, &broads[i].color);
    dfs(0, 0, 0, n);
    printf("%d\n", res);
    return 0;
}