#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int x, y;
int a[110][110];
int ans;
int cnt;
void dfs(int x, int y)
{
    cnt++;
    a[x][y] = 0;
    if (a[x][y + 1])
        dfs(x, y + 1);
    if (a[x][y - 1])
        dfs(x, y - 1);
    if (a[x + 1][y])
        dfs(x + 1, y);
    if (a[x - 1][y])
        dfs(x - 1, y);
}
int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j])
            {
                cnt = 0;
                dfs(i, j);
                ans = max(ans, cnt);
            }
        }
    }
    cout << ans << endl;
    return 0;
}