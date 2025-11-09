#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char *str[], int n)
{
    char *temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) < 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char *str[6] = {"Beijing", "Shanghai", "Shenzhen", "Nanjing", "Dalian", "Qingdao"};
    sort(str, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}