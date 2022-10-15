#include <bits/stdc++.h>
using namespace std;
int n, a[1005][1005];
void dg(int x, int y, int sz)
{
    if (sz == 0)
        return;
    int mx = x + sz / 2;
    int my = y + sz / 2;
    for (int j = y; j < y + sz; j++)
        a[mx][j] = '-';
    for (int i = x; i < x + sz; i++)
        a[i][my] = '|';
    a[mx][my] = '+';
    dg(x, y, sz / 2);
    dg(x, y + sz / 2 + 1, sz / 2);
    dg(x + sz / 2 + 1, y, sz / 2);
    dg(x + sz / 2 + 1, y + sz / 2 + 1, sz / 2);
}
int main()
{
    cin >> n;
    n = pow(2, n) - 1;
    dg(1, 1, n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(a[i][j]);
        }
        cout << endl;
    }
    return 0;
}