#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int k = 2;
    while (n != 1)
    {
        while (n % k == 0)
        {
            printf("%d ", k);
            n = n / k;
        }
        k++;
    }
    return 0;
}