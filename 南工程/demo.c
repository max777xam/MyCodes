#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// void function(char str[])
// {
// int i, j = 0;
// int inNumber = 0; // 标记是否在数字序列中
// int len = strlen(str);
// int lastStarIndex = -1; // 记录最后一个星号的位置
// // 先找到最后一个星号的位置
// for (i = len - 1; i >= 0; i--)
// {
//     if (str[i] == '*' && str[i - 1] != '*')
//     {
//         lastStarIndex = i;
//         break;
//     }
// }
//     for (i = 0; i < len; i++)
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//         {
//             // 如果是数字，直接保留
//             str[j++] = str[i];
//             inNumber = 1;
//         }
//         else if (str[i] == '*')
//         {
//             // 如果是星号，只有在数字序列开始前或在末尾才保留
//             if (!inNumber || i >= lastStarIndex)
//             {
//                 str[j++] = str[i];
//             }
//         }
//         else
//         {
//             // 其他字符直接保留
//             str[j++] = str[i];
//             inNumber = 0;
//         }
//     }
//     str[j] = '\0'; // 确保字符串正确结束n
// }
void function(char str[])
{
    int a, t = 0, g = 0, s = 0, i, kaishi = 1, fugai = 1;
    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == '*')
            a = 0;
        else
            a = 1;
        if (t != a)
            g++;
        t = a;
        if (g == 2)
        {
            s++;
        }
        if (g == 2 && s == 1)
            kaishi = i;
    }
    for (fugai = kaishi; fugai < len - kaishi - s + 1; fugai++)
        str[fugai] = str[fugai + s];
}
int main()
{
    char str[] = "******123456****789***";
    function(str);
    printf("处理后字符:%s\n", str);
    return 0;
}