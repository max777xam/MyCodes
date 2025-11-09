#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n = 0;
    for (int i = 1904; i <= 2000; i += 4)
    {
        printf("%d ", i);
        n++;
        if (n % 3 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}