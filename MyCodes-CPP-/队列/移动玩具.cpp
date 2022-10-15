#include<bits/stdc++.h>
using namespace std;
int pre[6][6], tar[6][6], vis[100001], f[100001], dec1, dec2;
int dx[4] = { -1, 1, 0, 0 }, dy[4] = { 0, 0, -1, 1 };
queue<int> q;
int BintoDec(int a[6][6])
{
    int res = 0;
    for (int i = 4; i >= 1; --i)
        for (int j = 4; j >= 1; --j)
            res += a[i][j] * pow(2, 16 - (i - 1) * 4 - j);
    return res;
}
void DectoBin(int x, int a[6][6])
{
    while (x)
    {
        for (int i = 4; i >= 1; --i)
            for (int j = 4; j >= 1; --j)
            {
                a[i][j] = x % 2;
                x /= 2;
            }
    }
}
int judge(int x0, int y0, int xx, int yy)
{
    return (xx >= 1) && (xx <= 4) && (yy >= 1) && (yy <= 4) && (pre[x0][y0] != pre[xx][yy]);
}
void bfs()
{
    q.push(dec1);
    vis[dec1] = 1;
    while (!q.empty())
    {
        int now = q.front();
        DectoBin(now, pre);
        q.pop();
        for (int i = 1; i <= 4; ++i)
            for (int j = 1; j <= 4; ++j)
            {
                int x0 = i, y0 = j;
                for (int k = 0; k < 4; ++k)
                {
                    int xx = x0 + dx[k], yy = y0 + dy[k], flag = 0;
                    if (judge(x0, y0, xx, yy))
                    {
                        flag = 1;
                        int tmpdec1 = BintoDec(pre);
                        swap(pre[x0][y0], pre[xx][yy]);
                        int tmpdec2 = BintoDec(pre);
                        if (!vis[tmpdec2])
                        {
                            vis[tmpdec2] = 1;
                            f[tmpdec2] = tmpdec1;
                            q.push(tmpdec2);
                        }
                        if (tmpdec2 == dec2)	return;
                    }
                    if (flag)
                        swap(pre[x0][y0], pre[xx][yy]);
                }
            }
    }
}
int main()
{
    for (int i = 1; i <= 4; ++i)
        for (int j = 1; j <= 4; ++j)
            scanf("%1d", &pre[i][j]);
    for (int i = 1; i <= 4; ++i)
        for (int j = 1; j <= 4; ++j)
            scanf("%1d", &tar[i][j]);
    dec1 = BintoDec(pre), dec2 = BintoDec(tar);
    bfs();
    f[dec1] = 0;
    int ans = 0;
    while (f[dec2])	ans++, dec2 = f[dec2];
    printf("%d", ans);
    return 0;
}