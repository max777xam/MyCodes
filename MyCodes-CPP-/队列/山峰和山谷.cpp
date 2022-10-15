#include<bits/stdc++.h>
using namespace std;
int n, flag1, flag2, ans1, ans2;
int w[1005][1005], vis[1005][1005];
int dx[8] = { 0, 0, 1, 1, -1, -1, 1, -1 };
int dy[8] = { 1, -1, 0, -1, 1, 0, 1, -1 };
bool check(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > n) return 0;
    return 1;
}
void bfs(int x, int y)
{
    int val = w[x][y];
    queue<pair<int, int> >Q;
    Q.push(make_pair(x, y));
    bool flag1 = flag2 = 0;
    while (Q.size())
    {
        pair<int, int> tot = Q.front();
        Q.pop();
        int xx = tot.first, yy = tot.second;
        for (int i = 0; i < 8; ++i)
        {
            int nx = xx + dx[i], ny = yy + dy[i];
            if (check(nx, ny))
            {
                if (w[nx][ny] == val)
                {
                    if (!vis[nx][ny])
                    {
                        vis[nx][ny] = 1;
                        Q.push(make_pair(nx, ny));
                    }
                }
                else
                {
                    if (w[nx][ny] < val) flag1 = 1;
                    if (w[nx][ny] > val) flag2 = 1;
                }
            }
        }
    }
    if (!flag1 && !flag2) ans1++, ans2++;
    if (flag1 && !flag2) ans1++;
    if (!flag1 && flag2) ans2++;
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            scanf("%d", &w[i][j]);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (!vis[i][j]) bfs(i, j);
    printf("%d %d", ans1, ans2);
    return 0;
}