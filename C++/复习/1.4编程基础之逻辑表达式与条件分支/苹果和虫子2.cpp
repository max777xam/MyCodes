#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x, y;
    cin >> n >> x >> y;
    int ans = n - ceil(y / x);
    if (ans < 0) ans = 0;
    cout << ans << endl;
    return 0;
}