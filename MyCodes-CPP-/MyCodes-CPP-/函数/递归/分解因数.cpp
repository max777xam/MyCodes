#include <bits/stdc++.h>
using namespace std;
int fenjie(int n, int a)
{
    int cnt = 1;
    if (n == 1)
        return 1;
    for (int i = a; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            cnt += fenjie(n / i, i);
    }
    return cnt;
}
int main()
{
    int n, jige;
    scanf("%d", &jige);
    while (jige--)
    {
        scanf("%d", &n);
        printf("%d\n", fenjie(n, 2));
    }
    return 0;
}