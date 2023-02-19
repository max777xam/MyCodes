#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, ai, bi, ci, sa, sb, sc, ans;
    cin >> n >> a >> ai >> b >> bi >> c >> ci;
    if (n % a != 0)
        sa = (n / a + 1) * ai;
    else
        sa = n / a * ai;
    if (n % b != 0)
        sb = (n / b + 1) * bi;
    else
        sb = n / b * bi;
    if (n % c != 0)
        sc = (n / c + 1) * ci;
    else
        sc = n / c * ci;
    ans = min(min(sa, sb), sc);
    cout << ans;
    return 0;
}