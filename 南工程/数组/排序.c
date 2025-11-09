#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[101], b[101], i, j, t, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (i = 1; i <= n - 1; i++)
        for (j = i + 1; j <= n; j++)
            if (b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            if (a[i] == b[j])
            {
                printf("%d ", j);
            }
    }
    return 0;
}