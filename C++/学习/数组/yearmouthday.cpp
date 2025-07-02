#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d, ans = 0;
    scanf("%d%d%d", &y, &m, &d);
    for (int i = 1; i <= m - 1; i++)
    {
        ans = ans + a[i];
        ans + d;
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}