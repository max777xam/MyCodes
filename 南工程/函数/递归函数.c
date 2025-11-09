#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int p(int n, int x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return (x * p(n - 1, x) * (2 * n - 1) - (n - 1) * p(n - 2, x)) / n;
}
int main()
{
    int n, x;
    scanf("%d%d", &n, &x);
    printf("%d", p(n, x));
    return 0;
}