#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("a=%d b=%d c=%d\n", a, b, c);
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}