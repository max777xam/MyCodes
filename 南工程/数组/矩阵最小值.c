#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int matrix[4][4];
    int min, i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    min = matrix[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    printf("%d\n", min);
    return 0;
}