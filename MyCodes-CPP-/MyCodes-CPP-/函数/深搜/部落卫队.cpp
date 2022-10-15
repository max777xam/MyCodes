#include <bits/stdc++.h>
using namespace std;
int n, m;
int cd[101][101], a[101], b[101], ans;
void dfs(int sum, int dep)
{
    if (dep > n)
    {
        if (sum > ans)
        {
            ans = sum;
            for (int i = 1; i <= n; i++)
            {
                b[i] = a[i];
            }
        }
        return;
    }
    int check = 1;
    for (int j = 1; j < dep; j++)
    {
        if (cd[dep][j] == dep && a[j])
        {
            check = 0;
            break;
        }
    }
    if (check)
    {
        a[dep] = 1;
        dfs(sum + 1, dep + 1);
        a[dep] = 0;
    }
    dfs(sum, dep + 1);
    return;
}
int main()
{
    int x, y;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        cd[x][y] = cd[y][x] = 1;
    }
    dfs(0, 1);
    cout << ans << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
