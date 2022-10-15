#include <bits/stdc++.h>
using namespace std;
string s[1001];
string sta;
int n, ans;
int vis[1001];
int check(string a, string b)
{
    string x, y;
    int lena = a.size(), lenb = b.size();
    for (int i = 1; i <= min(a.size(), b.size()); i++)
    {
        x = a[lena - i] + x;
        y += b[i - 1];
        if (x == y)
            return i;
    }
    return 0;
}
void dfs(string dep, int sum)
{
    ans = max(ans, sum);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] <= 1 && check(dep, s[i]) > 0)
        {
            vis[i]++;
            dfs(s[i], sum + s[i].size() - check(dep, s[i]));
            vis[i]--;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    cin >> sta;
    dfs(sta, 1);
    cout << ans << endl;
    return 0;
}