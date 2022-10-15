#include <bits/stdc++.h>
using namespace std;
int dls(int a)
{
    if (a < 4)
        return 1;
    else
        return dls(a - 1) + dls(a - 3);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", dls(n));
    return 0;
}