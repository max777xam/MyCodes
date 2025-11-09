#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int slength(char *str)
{
    int sum = 0;
    while (*str != '\0')
    {
        sum++;
        str++;
    }
    return sum;
}
int main()
{
    char a[100];
    scanf("%s", a);
    printf("%d", slength(a));
    return 0;
}