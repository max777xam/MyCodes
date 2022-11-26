#include <bits/stdc++.h>
using namespace std;
char s[1001];
int main()
{
    int n = 0, i, j;
    char x;
    scanf("%c", &x);
    while (x != '\n')
    {
        s[++n] = x;
        scanf("%c", &x);
    }
    i = 1;
    j = n;
    while (i <= j && s[i] == s[j])
    {
        i++;
        j--;
    }
    if (i > j)
        printf("YES");
    else
        printf("NO");
    return 0;
}