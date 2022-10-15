#include <bits/stdc++.h>
using namespace std;
long long n, ans;
long long a[10001];
void dfs(long long dep)
{
    if (dep > n)
    {
        ans++;
        return;
    }
    a[dep] = 0;
    dfs(dep + 1);
    if (!(a[dep - 2] == 1 && a[dep - 1] == 0))
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