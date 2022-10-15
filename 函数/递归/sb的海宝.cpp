#include <bits/stdc++.h>
using namespace std;
int cnt;
int coins(int n)
{
    if (n == 1)
        return 1;
    if (n != 1 && n % 2 == 1)
        return coins(3 * n + 1) + n;
    else
        return coins(n / 2) + n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", coins(n));
    return 0;
}