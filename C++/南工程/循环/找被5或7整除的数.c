#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    for (int i = 5; i <= 100; i++)
    {
        if ((i % 5 == 0) || (i % 7 == 0))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}