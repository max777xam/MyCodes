#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = n * (n - 2) * 180 / n;
    int a[1001];
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a[i];
        sum -= a[i];
    }
    cout << sum << endl;
    return 0;
}