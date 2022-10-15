#include <bits/stdc++.h>
using namespace std;
int n, c, a[41], b[41];
int sum, m;
void dfs(int dep)
{
    if (dep == n + 1)
    {
        if (sum > m)
            m = sum;
        if (m == c)
        {
            printf("%d", m);
            exit(0);
        }
        return;
    }
    for (int i = dep; i <= n; i++)
    {
        if (sum == c)
            cout << c, exit(0);
        if (b[i] == 1)
            continue;
        if (a[i] + sum <= c)
        {
            b[i] = 1;
            sum += a[i];
            dfs(dep + 1);
            b[i] = 0;
            sum -= a[i];
        }
        else
            dfs(n + 1);
    }
}
int main()
{
    scanf("%d%d", &n, &c);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        if (a[i] == c)
        {
            printf("%d", c);
            return 0;
        }
    }
    if (sum <= c)
    {
        printf("%d", sum);
        return 0;
    }
    sort(a + 1, a + 1 + n);
    dfs(1);
    printf("%d", m);
    return 0;
}
