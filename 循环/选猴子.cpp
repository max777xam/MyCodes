#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001], m, n;
    scanf("%d%d", &n, &m); /*  nֻ��,��m��  */
    memset(a, 0, sizeof(a));
    int k = 0, h = 0; /*   kΪ��������hΪ���Ӻ�    */
    for (int i = 1; i <= n; i++)
    {
        while (k < m)
        {
            h++;
            if (h > n)
                h = 1;
            if (a[h] == 0)
                k++;
        }
        a[h] = 1;
        k = 0;
        printf("%d\t", k);
    }

    return 0;
}