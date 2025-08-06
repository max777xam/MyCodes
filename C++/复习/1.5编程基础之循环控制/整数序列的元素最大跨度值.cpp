#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, maxn = INT_MIN, minn = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        maxn = max(maxn, a);
        minn = min(minn, a);
    }
    cout << maxn - minn << endl;
    return 0;
}