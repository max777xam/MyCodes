#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (check(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}