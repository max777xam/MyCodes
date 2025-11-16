#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct date
{
    int year;
    int month;
    int day;
} d;
int main()
{
    scanf("%d %d %d", &d.year, &d.month, &d.day);
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for (int i = 0; i < d.month - 1; i++)
    {
        sum += a[i];
    }
    sum += d.day;
    if (d.year % 4 == 0 && d.year % 100 != 0 || d.year % 400 == 0)
    {
        if (d.month > 2)
        {
            sum += 1;
        }
    }
    printf("%d", sum);
    return 0;
}