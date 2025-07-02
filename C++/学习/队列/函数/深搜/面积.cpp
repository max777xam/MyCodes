#include <iostream>
using namespace std;
int xx[5] = {-1, 1, 0, 0};
int yy[5] = {0, 0, -1, 1};
int a[101][101];
void dfs(int i, int j)
{
    a[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        int x = i + xx[k];
        int y = j + yy[k];
        if (x >= 1 && x <= 10 && y >= 1 && y <= 10 && a[x][y] == 0)
        {
            dfs(x, y);
        }
    }
}
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        if (a[1][i] == 0)
        {
            dfs(1, i);
        }
        if (a[i][1] == 0)
        {
            dfs(i, 1);
        }
        if (a[10][i] == 0)
        {
            dfs(10, i);
        }
        if (a[i][10] == 0)
        {
            dfs(i, 10);
        }
    }
    int cnt = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (a[i][j] == 0)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}