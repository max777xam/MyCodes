#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char *p, char *q, char *taget)
{
    while (*p != '\0')
    {
        if (*p == *q)
        {
            p++;
            q++;
            if (*q == '\0')
            {
                return 1;
            }
        }
        else
        {
            p++;
            q = taget;
        }
    }
    return 0;
}
int main()
{
    char str[100];
    char taget[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    fgets(taget, 100, stdin);
    taget[strcspn(taget, "\n")] = '\0';
    char *p = str;
    char *q = taget;
    printf("%d", find(p, q, taget));
    return 0;
}