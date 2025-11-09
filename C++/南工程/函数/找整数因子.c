#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void find(int n)
{
    int i;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    find(n);
    return 0;
}