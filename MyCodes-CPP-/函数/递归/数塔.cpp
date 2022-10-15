#include <bits/stdc++.h>
using namespace std;
int t[505][505], a[505][505], n;
int f(int i, int j)
{
    if (t[i][j])
        return t[i][j];
    if (i == 1)
        return a[1][1];
    return t[i][j] = max(f(i - 1, j), f(i - 1, j - 1)) + a[i][j];
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    int maxx = -99;
    for (int i = 1; i <= n; i++)
    {
        maxx = max(maxx, f(n, i));
    }
    cout << maxx;
    return 0;
}