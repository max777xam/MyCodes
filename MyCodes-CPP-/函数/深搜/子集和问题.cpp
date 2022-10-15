#include <bits/stdc++.h>
using namespace std;
int a[10001], b[10001], su;
bool flag = false;
int n, c;
void dfs(int l, int dep, int s)
{
    if (s > c)
        return;
    if (s == c)
    {
        for (int i = 1; i < dep; i++)
        {
            cout << b[i] << " ";
        }
        flag = true;
        exit(0);
    }
    for (int i = l + 1; i <= n; i++)
    {
        b[dep] = a[i];
        dfs(i, dep + 1, s + a[i]);
    }
}

int main()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        su += a[i];
    }
    if (su < c)
    {
        cout << "No Solution!";
        return 0;
    }
    dfs(0, 1, 0);
    if (flag == false)
        cout << "No Solution!";
    return 0;
}