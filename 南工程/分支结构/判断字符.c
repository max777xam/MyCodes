#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c;
    printf("请输入一个字符：");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("输入的是小写字母\n");
    else if (c >= 'A' && c <= 'Z')
        printf("输入的是大写字母\n");
    else if (c >= '0' && c <= '9')
        printf("输入的是数字\n");
    else
        printf("输入的是其他字符\n");
    return 0;
}