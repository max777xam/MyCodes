#include<bits/stdc++.h>
using namespace std;
int dir[8][2] = { {-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2}, {1,2},{2,-1},{2,1} };
struct qq
{
    int x, y;
}q[2][100005];
int test, ans, n, L[2], R[2];
int dis[2][301][301];
int vis[2][301][301];
int expand(int k)
{
    int t, x, y, d, tx, ty;
    x = q[k][L[k]].x;
    y = q[k][L[k]].y;
    d = dis[k][x][y];
    for (int i = 0;i < 8;i++)
    {
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        if (0 <= tx && tx <= n && 0 <= ty && ty <= n && !vis[k][tx][ty])
        {
            vis[k][tx][ty] = 1;
            R[k] ++;
            q[k][R[k]].x = tx;
            q[k][R[k]].y = ty;
            dis[k][tx][ty] = d + 1;
            if (vis[1 - k][tx][ty])
            {
                ans = dis[k][tx][ty] + dis[1 - k][tx][ty];
                return 1;
            }
        }
    }
    return 0;
}
void bfs()
{
    if (q[0][1].x == q[1][1].x && q[0][1].y == q[1][1].y)
    {
        ans = 0;
        return;
    }
    vis[0][q[0][1].x][q[0][1].y] = 1;
    vis[1][q[1][1].x][q[1][1].y] = 1;
    L[0] = R[0] = 1;
    L[1] = R[1] = 1;
    while (L[0] <= R[0] && L[1] <= R[1])
    {
        if (R[0] - L[0] < R[1] - L[1])
        {
            if (expand(0)) return;
            L[0]++;

        }
        else
        {
            if (expand(1)) return;
            L[1]++;
        }
    }
}
int main()
{

    for (cin >> test; test; test--)
    {
        memset(vis, 0, sizeof vis);
        memset(q, 0, sizeof q);
        memset(dis, 0, sizeof dis);
        cin >> n;
        n--;
        cin >> q[0][1].x >> q[0][1].y;
        cin >> q[1][1].x >> q[1][1].y;
        bfs();
        cout << ans << endl;
    }
    return 0;
}