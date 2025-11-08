#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(int a[], int n, int x)
{
    int i;
    int *p = a;
    for (i = 0; i < n; i++)
    {
        if (*p == x)
            return i;
        p++;
    }
    return -1;
}
int main()
{
    int a[100], n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int x;
    scanf("%d", &x);
    j = find(a, n, x);
    printf("%d\n", j);
    return 0;
}