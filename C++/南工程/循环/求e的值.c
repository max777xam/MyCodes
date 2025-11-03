#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double e = 1.0;
    double temp = 1.0;
    int n = 1;
    while (temp > 0.000001)
    {
        temp /= n;
        e += temp;
        n++;
    }
    printf("e=%.8lf\n", e);
    return 0;
}