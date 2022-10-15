#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int m, n, sum = 0;
struct cell
{
    int x;
    int y;
} p;
queue<struct cell> q;
void bfs(int i, int j)
{
    int k, tx, ty;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    p.x = i;
    p.y = j;
    q.push(p);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        i = p.x;
        j = p.y;
        if (a[i][j] >= 1 && a[i][j] <= 9)
        {
            a[i][j] = -1;
            for (k = 0; k <= 3; k++)
            {
                tx = i + dx[k];
                ty = j + dy[k];
                if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && (a[tx][ty] != -1 && a[tx][ty] != 0))
                {
                    p.x = tx;
                    p.y = ty;
                    q.push(p);
                }
            }
        }
    }
    sum++;
}
int main()
{
    cin >> m >> n;
    char q[101][101];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> q[i][j];
            a[i][j] = q[i][j] - '0';
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] >= 1 && a[i][j] <= 9)
            {
                bfs(i, j);
            }
        }
    }
    cout << sum << endl;
    return 0;
}