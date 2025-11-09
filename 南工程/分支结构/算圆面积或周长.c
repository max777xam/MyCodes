#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.1415926
int main()
{
    int goal;
    double r;
    scanf("%d %lf", &goal, &r);
    if (goal == 0)
    {
        printf("%.2lf", PI * r * r);
    }
    else if (goal == 1)
    {
        printf("%.2lf", 2 * PI * r);
    }
    return 0;
}