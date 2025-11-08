#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[100][100];
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int max = a[i][1];
        int flag;
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                flag = j;
            }
            int check = 1;
            for (int k = 1; k <= n; k++)
            {
                if (a[k][flag] < a[i][j])
                {
                    check = 0;
                    break;
                }
            }
            if (check == 1)
            {
                printf("第%d行,第%d列为鞍点\n", i, flag);
            }
        }
    }
    return 0;
}