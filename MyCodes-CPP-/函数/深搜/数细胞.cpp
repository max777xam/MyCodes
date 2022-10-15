#include <bits/stdc++.h>
using namespace std;
int n, m;
int ans;
char a[1005][1005];
void cells(int x, int y)
{
    if (x > n || x < 1 || y > m || y < 1 || a[x][y] == '0')
        return;
    a[x][y] = '0';
    cells(x + 1, y);
    cells(x, y + 1);
    cells(x - 1, y);
    cells(x, y - 1);
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] != '0')
            {
                ans++;
                cells(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}