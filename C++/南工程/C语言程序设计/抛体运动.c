#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    double v0, t, a, s, g = 9.8;
    scanf("%lf %lf", &v0, &a);
    a = a / 180.0 * 3.1415926;
    t = 2 * v0 * sin(a) / g;
    s = v0 * sin(2 * a) / g;
    printf("t=%.2lf\ns=%.2lf", t, s);
    return 0;
}