#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if (x < -1)
        printf("%lf\n", x * x - 1);
    else if (x >= -1 && x <= 1)
        printf("%lf\n", x * x);
    else
        printf("%lf\n", x * x + 1);
    return 0;
}