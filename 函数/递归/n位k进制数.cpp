#include <bits/stdc++.h>
using namespace std;
int n, k, a[10001];
void dfs(int dep)
{
    if (dep == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {

            cout << a[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < k; i++)
    {
        a[dep] = i;
        dfs(dep + 1);
    }
}
int main()
{
    scanf("%d%d", &n, &k);
    dfs(1);
    return 0;
}