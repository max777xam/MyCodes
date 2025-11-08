#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int find(char *p, char *q, char *target)
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
            q = target;
        }
    }
    return 0;
}
int main()
{
    char str[100];
    char target[100];
    scanf("%s", str);
    scanf("%s", target);
    // fgets(str, 100, stdin);
    // str[strcspn(str, "\n")] = '\0';
    // fgets(taget, 100, stdin);
    // taget[strcspn(taget, "\n")] = '\0';
    char *p = str;
    char *q = target;
    printf("%d", find(p, q, target));
    return 0;
}