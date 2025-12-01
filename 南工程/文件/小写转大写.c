#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *file;
    char filename[100];
    char ch;
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("无法打开文件%s\n", filename);
        return 1;
    }
    printf("转换后的内容:\n");
    while ((ch = fgetc(file)) != EOF)
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        putchar(ch);
    }
    fclose(file);
    return 0;
}