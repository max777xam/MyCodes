#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, sum = 0;
    int n;
    cin >> x >> n;
    while (n)
    {
        sum += pow(x, n--);
    }
    printf("%.2f\n", sum + 1);
    return 0;
}