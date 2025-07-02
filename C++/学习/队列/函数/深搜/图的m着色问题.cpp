#include <bits/stdc++.h>
using namespace std;
int m;
int pointnum;
int edgenum;
int cnt = 0;
int Graph[2505][2505];
int colour[10001];
bool check(int flag)
{
    for (int i = 1; i < flag; i++)
        if (Graph[flag][i] == 1 && colour[i] == colour[flag])
            return false;
    return true;
}
void dfs(int dep)
{
    if (dep > pointnum)
    {
        cnt++;
        return;
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            colour[dep] = i;
            if (check(dep))
                dfs(dep + 1);
            colour[dep] = 0;
        }
    }
}
int main()
{
    int x, y;
    cin >> pointnum >> edgenum >> m;
    for (int i = 1; i <= edgenum; i++)
    {
        cin >> x >> y;
        Graph[x][y] = Graph[y][x] = 1;
    }
    dfs(1);
    cout << cnt << endl;
}