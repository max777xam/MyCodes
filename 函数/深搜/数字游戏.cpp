#include <bits/stdc++.h>
using namespace std;
int a[11][11], b[11][11];
int n;
bool checkx(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (b[x][i] == 0)
            continue;
        for (int j = 1; j < i; j++)
            if (b[x][i] == b[x][j])
                return false;
    }
    return true;
}
bool checky(int y)
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i][y] == 0)
            continue;
        for (int j = 1; j < i; j++)
            if (b[i][y] == b[j][y])
                return false;
    }
    return true;
}
void dfs(int na, int nb)
{
    if (na == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                printf("%d ", b[i][j]);
            printf("\n");
        }
        exit(0);
    }
    if (b[na][nb] != 0)
    {
        int nna = na, nnb = nb;
        if (nb == n)
            na++, nb = 1;
        else
            nb++;
        dfs(na, nb);
        na = nna, nb = nnb;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        b[na][nb] = i;
        if (checkx(na) == false || checky(nb) == false)
        {
            b[na][nb] = 0;
            continue;
        }
        int nna = na, nnb = nb;
        if (nb == n)
            na++, nb = 1;
        else
            nb++;
        dfs(na, nb);
        na = nna, nb = nnb;
        b[nna][nnb] = 0;
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]), b[i][j] = a[i][j];
    dfs(1, 1);
    return 0;
}