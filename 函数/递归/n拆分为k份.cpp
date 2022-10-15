#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int a[10001];
int n, k;
void chaifen(int dep, int lst, int rem)
{
    if (dep == k)
    {
        a[dep] = rem;
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = lst; i <= rem / (k - dep + 1); i++)
    {
        a[dep] = i;
        chaifen(dep + 1, i, rem - i);
    }
}
int main()
{
    cin >> n >> k;
    chaifen(1, 1, n);
    return 0;
}