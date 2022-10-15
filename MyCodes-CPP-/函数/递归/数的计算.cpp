#include <bits/stdc++.h>
using namespace std;
int ans;
void dfs(int m)
{
    ans++;
    for (int i = 1; i <= m / 2; i++)
        dfs(i);
}
int main()
{
    int n;
    scanf("%d", &n);
    dfs(n);
    printf("%d\n", ans);
    return 0;
}