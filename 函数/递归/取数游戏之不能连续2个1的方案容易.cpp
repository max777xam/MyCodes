#include <bits/stdc++.h>
using namespace std;
int n, ans;
int a[10001];
void dfs(int dep)
{
    if (dep > n)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
        ans++;
        return;
    }
    a[dep] = 0;
    dfs(dep + 1);
    if (!(a[dep - 2] == 1 && a[dep - 1] == 1))
    {
        a[dep] = 1;
        dfs(dep + 1);
    }
}
int main()
{
    cin >> n;
    dfs(1);
    cout << ans << endl;
    return 0;
}