#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100][12];
int b[100];
int c[11];
void dfs(int dep)
{
    if (dep > n)
    {
        bool flg = 1;
        for (int i = 1; i <= m; i++)
        {
            int sum = 0;
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == c[j])
                    sum += 10;
            }
            if (sum != b[i])
            {
                flg = 0;
                return;
            }
        }
        if (flg)
        {
            int ans = 0;
            for (int i = 1; i <= n; i++)
            {
                if (a[m + 1][i] == c[i])
                    ans += 10;
            }
            cout << ans << endl;
            exit(0);
        }
    }
    for (int i = 0; i <= 1; i++)
    {
        c[dep] = i;
        dfs(dep + 1);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[m + 1][i];
    }
    dfs(1);
    return 0;
}