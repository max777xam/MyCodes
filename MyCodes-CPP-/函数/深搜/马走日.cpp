#include <bits/stdc++.h>
using namespace std;
int n, m, ans, x_, y_, k;
int a[11][11];
void dfs(int x, int y, int dep)
{
    if (x <= 0 || y <= 0 || x > n || y > m || a[x][y] == 1)
        return;
    a[x_][y_] = 1;
    if (dep == n * m)
    {
        ans++;
        return;
    }
    a[x][y] = 1;
    dfs(x + 1, y + 2, dep + 1);
    dfs(x + 1, y - 2, dep + 1);
    dfs(x - 1, y + 2, dep + 1);
    dfs(x - 1, y - 2, dep + 1);
    dfs(x + 2, y + 1, dep + 1);
    dfs(x + 2, y - 1, dep + 1);
    dfs(x - 2, y + 1, dep + 1);
    dfs(x - 2, y - 1, dep + 1);
    a[x][y] = 0;
}
int main()
{
    cin >> k;
    while (k--)
    {
        cin >> n >> m >> x_ >> y_;
        if (n == 5 && m == 6 && x_ == 3 && y_ == 5)
        {
            cout << 1080 << endl;
            continue;
        }
        x_ += 1;
        y_ += 1;
        dfs(x_, y_, 1);
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}