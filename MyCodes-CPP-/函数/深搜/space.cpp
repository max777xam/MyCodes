#include <bits/stdc++.h>
using namespace std;
int n, k, ans, cnt, sum, clen;
char a[1001][1001];
int vis[1001][1001], c[100001];
void dfs(int x, int y)
{
    if (a[x][y] == '.' || vis[x][y] == 1 || x < 1 || y < 1 || x > n || y > n)
        return;
    ans++;
    vis[x][y] = 1;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == '*' && vis[i][j] == 0)
            {
                dfs(i, j);
                c[++clen] = ans;
                ans = 0;
                sum++;
            }
        }
    }
    sort(c + 1, c + clen + 1);
    for (int i = 1; i <= sum - k; i++)
    {
        cnt += c[i];
    }
    cout << cnt << endl;
}