#include <bits/stdc++.h>
#include <stdio.h>

int main()
{
    int a = 10;
    char b = 'b';
    short c = 2;
    long d = 9;
    float e = 6.29f;
    double f = 95.0629;
    int arr[] = {1, 2, 3};
    char str[] = "hello";
    double *p = &f;
    int *i = &a;
    printf("a=%d,b=%d,c=%d,d=%d,e=%d,f=%d,arr=%d,str=%d point_p=%d,point_i=%d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f), sizeof(arr), sizeof(str), sizeof(p), sizeof(i));
    return 0;
}