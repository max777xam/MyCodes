#include <bits/stdc++.h>
using namespace std;
int judge(int x)
{
    int i;
    int sum = 0;
    for (i = 1; i < x; i++)
        if (x % i == 0)
            sum += i;
    return sum;
}
int main()
{
    int n;
    int i;
    cin >> n;
    for (i = 2; i <= n; i++)
        if (judge(i) == i)
            cout << i << endl;
    return 0;
}