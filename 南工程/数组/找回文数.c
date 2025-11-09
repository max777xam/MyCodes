#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(int num)
{
    char str[20];
    sprintf(str, "%d", num);
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{
    for (int i = 1; i <= 256; i++)
    {
        int num = i * i;
        if (check(num))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}