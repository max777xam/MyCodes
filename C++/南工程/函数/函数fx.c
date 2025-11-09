#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
double fx(double x)
{
    double y;
    if (x > 1)
    {
        y = x * x + 1;
    }
    else if (x < -1)
    {
        y = x * x - 1;
    }
    else
    {
        y = x * x;
    }
    return y;
}
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf", fx(x));
    return 0;
}