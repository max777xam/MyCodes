#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[10001], s[10001];
int result = INT_MAX;
bool cmp(int x, int y)
{
    return x > y;
}
inline void dfs(int dep, int c)
{
    if (c >= result)
        return;
    if (dep > n)
    {
        if (c < result)
            result = c;
        return;
    }
    for (int i = 1; i <= k; i++)
    {
        if (s[i] + a[dep] <= result)
        {
            s[i] += a[dep];
            dfs(dep + 1, max(c, s[i]));
            s[i] -= a[dep];
        }
    }
    return;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    dfs(1, 0);
    cout << result << endl;
    return 0;
}