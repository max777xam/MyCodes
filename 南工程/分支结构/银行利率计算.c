#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double money, rate, sum;
    int year;
    scanf("%lf", &money);
    scanf("%d", &year);
    switch (year)
    {
    case 0:
        rate = 0.0072;
        break;
    case 1:
        rate = 0.0198;
        break;
    case 2:
        rate = 0.0225;
        break;
    case 3:
        rate = 0.0254;
        break;
    case 5:
        rate = 0.0279;
        break;
    default:
        break;
    }
    sum = money * rate * year * 0.8 + money;
    printf("%.2lf", sum);
    return 0;
}