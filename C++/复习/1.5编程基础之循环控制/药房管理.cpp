#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int sum = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        sum += a;
        if (sum > m)
        {
            cnt++;
            sum -= a;
            continue;
        }
    }
    cout << cnt << endl;
    return 0;
}