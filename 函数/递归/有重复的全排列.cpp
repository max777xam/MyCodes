#include <bits/stdc++.h>
using namespace std;
int a[10001];
int zuida, weishu;
void dfs(int dep, int lst)
{
    if (dep > weishu)
    {
        for (int i = 1; i <= weishu; i++)
        {
            printf("%d", a[i]);
        }
        printf(" ");
        return;
    }
    for (int i = lst; i <= zuida; i++)
    {
        a[dep] = i;
        dfs(dep + 1, i);
    }
}
int main()
{
    scanf("%d%d", &zuida, &weishu);
    dfs(1, 1);
    return 0;
}