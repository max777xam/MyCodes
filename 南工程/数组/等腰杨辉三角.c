#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int space = 1; space <= 10 - i; space++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                n = 1;
            }
            else
            {
                n = n * (i - j + 1) / j;
            }
            printf("%4d", n);
        }
        printf("\n");
    }

    return 0;
}