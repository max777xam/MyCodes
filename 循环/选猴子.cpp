#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001], m, n;
    scanf("%d%d", &n, &m); /*  n只猴,第m个  */
    memset(a, 0, sizeof(a));
    int k = 0, h = 0; /*   k为报数名，h为椅子号    */
    for (int i = 1; i <= n; i++)
    {
        while (k < m)
        {
            h++;
            if (h > n)
                h = 1;
            if (a[h] == 0)
                k++;
        }
        a[h] = 1;
        k = 0;
        printf("%d\t", k);
    }

    return 0;
}