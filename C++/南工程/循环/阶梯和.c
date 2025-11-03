#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    long int sum = 0;
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        sum += k * i;
        k--;
    }
    printf("%ld", sum);
    return 0;
}