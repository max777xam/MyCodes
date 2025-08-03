#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x, y;
    cin >> n >> x >> y;
    int ans = n - ceil(y / x);
    cout << ans << endl;
    return 0;
}