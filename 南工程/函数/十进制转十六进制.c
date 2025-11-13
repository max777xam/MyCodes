#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char hex[32];
char *DecToHex(int dec)
{
    char hexDigits[] = "0123456789ABCDEF";
    int i = 0;
    int isNegative = 0;
    if (dec < 0)
    {
        isNegative = 1;
        dec = -dec;
    }
    if (dec == 0)
    {
        hex[0] = '0';
        hex[1] = '\0';
        return hex;
    }
    while (dec > 0)
    {
        hex[i++] = hexDigits[dec % 16];
        dec = dec / 16;
    }
    if (isNegative)
    {
        hex[i++] = '-';
    }
    hex[i] = '\0';
    for (int j = 0; j < i / 2; j++)
    {
        char temp = hex[j];
        hex[j] = hex[i - 1 - j];
        hex[i - 1 - j] = temp;
    }
    return hex;
}
int main()
{
    int dec;
    scanf("%d", &dec);
    printf("%s\n", DecToHex(dec));
    return 0;
}