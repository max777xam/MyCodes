#include <bits/stdc++.h>
using namespace std;
int n, a[1001], ans = 0;
bool b[1001];
bool isprime(int j)
{
    for (int i = 2; i <= sqrt(j); i++)
    {
        if (j % i == 0)
            return false;
    }
    return true;
}
void dfs(int dep)
{
    if (dep == n + 1)
    {
        if (isprime(a[n] + a[1]) == true)
        {
            for (int i = 1; i <= dep - 1; i++)
            {
                printf("%d ", a[i]);
            }
            ans++;
            printf("\n");
        }
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (b[i] == 0 && isprime(a[dep - 1] + i) == true)
            {
                a[dep] = i;
                b[i] = 1;
                dfs(dep + 1);
                b[i] = 0;
            }
        }
    }
}
int main()
{
    scanf("%d", &n);
    a[1] = 1;
    dfs(2);
    if (ans == 0)
    {
        printf("NO");
    }
    return 0;
}