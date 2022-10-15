#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int a[11][11];
void dfs(int x, int y)
{
    if (x <= 0 || y <= 0 || x > n || y > n || a[x][y] == 1)
        return;
    if (x == 1 && y == n)
    {
        cnt++;
        return;
    }
    a[x][y] = 1;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
    dfs(x + 1, y + 1);
    dfs(x - 1, y - 1);
    dfs(x + 1, y - 1);
    dfs(x - 1, y + 1);
    a[x][y] = 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    dfs(1, 1);
    cout << cnt << endl;
    return 0;
}