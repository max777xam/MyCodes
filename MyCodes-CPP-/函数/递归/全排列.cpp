#include <bits/stdc++.h>
using namespace std;
int n;
bool vis[101];
int a[101];
void dfs(int x)
{
    if (x > n)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                a[x] = i;
                dfs(x + 1);
                vis[i] = 0;
            }
        }
    }
    return;
}
int main()
{
    scanf("%d", &n);
    dfs(1);
    return 0;
}