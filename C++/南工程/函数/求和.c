#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
long int sum(int n)
{
    long int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%ld", sum(n));
    return 0;
}