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
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            for (int k = 1; k <= n; k++)
            {
                
            }
        }
    }
    return 0;
}