#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[101];
    int i, j, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    fgets(str, 100, stdin);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            cnt1++;
        else if (str[i] == ' ')
            cnt2++;
        else if (str[i] >= '0' && str[i] <= '9')
            cnt3++;
        else
            cnt4++;
    }
    printf("%d %d %d %d", cnt1, cnt2, cnt3, cnt4);
    return 0;
}