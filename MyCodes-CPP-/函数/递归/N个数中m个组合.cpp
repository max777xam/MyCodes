#include <bits/stdc++.h>
using namespace std;
int n, m, a[10001];
void dfs(int dep, int lst)
{
    if (dep == m + 1)
    {
        for (int i = 1; i <= m; i++)
        {

            cout << a[i];
        }
        cout << endl;
        return;
    }
    for (int i = lst + 1; i <= n; i++)
    {
        a[dep] = i;
        dfs(dep + 1, i);
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    dfs(1, 0);
    return 0;
}