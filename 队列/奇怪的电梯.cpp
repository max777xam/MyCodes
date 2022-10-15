#include <bits/stdc++.h>
using namespace std;
int n, a, b, to[205];
bool vis[205];
struct floors
{
    int flr, step;
} x;
queue<floors> q;
int main()
{
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1; i <= n; i++)
        scanf("%d", &to[i]);
    q.push({a, 0});
    while (q.size())
    {
        x = q.front();
        q.pop();
        if (x.flr == b)
            break;
        if (x.flr + to[x.flr] <= n && !vis[x.flr + to[x.flr]])
        {
            q.push({x.flr + to[x.flr], x.step + 1});
            vis[x.flr + to[x.flr]] = 1;
        }
        if (x.flr - to[x.flr] >= 1 && !vis[x.flr - to[x.flr]])
        {
            q.push({x.flr - to[x.flr], x.step + 1});
            vis[x.flr - to[x.flr]] = 1;
        }
    }
    if (x.flr == b)
        printf("%d", x.step);
    else
        printf("-1");
    return 0;
}
