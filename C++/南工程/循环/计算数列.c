#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += (double)n / i;
        }
        else
        {
            sum -= (double)n / i;
        }
    }
    printf("%lf", sum);
    return 0;
}