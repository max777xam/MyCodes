#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    FILE *file;
    int numbers[10];
    int i;
    file = fopen("numbers.txt", "w");
    if (file == NULL)
    {
        printf("无法创建文件\n");
        return 1;
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 10; i++)
    {
        fprintf(file, "%d\n", numbers[i]);
    }
    fclose(file);
    return 0;
}