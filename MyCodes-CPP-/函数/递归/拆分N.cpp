#include <stdio.h>
int q(int m, int n)
{
    if (m <= 0 || n <= 0)
        return 0;
    if (m == 1 || n == 1)
        return 1;
    if (m == n)
        return (1 + q(m, n - 1));
    if (m < n)
        return q(m, m);
    if (m > n)
        return (q(m, n - 1) + q(m - n, n));
}
int main()
{
    int t;
    scanf("%d", &t);
    int x = q(t, t);
    printf("%d\n", x);
    return 0;
}