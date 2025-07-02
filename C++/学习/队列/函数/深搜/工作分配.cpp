#include <bits/stdc++.h>
using namespace std;
int n, sum;
int money[21][21], youwu[21];
int Min = INT_MAX;
void dfs(int dep)
{
    if (dep > n)
    {
        if (Min > sum)
        {
            Min = sum;
            return;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!youwu[i])
        {
            youwu[i] = 1;
            sum += money[dep][i];
            if (sum < Min)
                dfs(dep + 1);
            youwu[i] = 0;
            sum -= money[dep][i];
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> money[i][j];
        }
        youwu[i] = 0;
    }
    dfs(1);
    cout << Min << endl;
    return 0;
}