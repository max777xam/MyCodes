#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[21];
    for (int i = 1; i <= 20; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= 20; i++)
    {
        int flag = 0;
        for (int j = 1; j <= 20; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 20; i++)
    {
        if (a[i] == n)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}