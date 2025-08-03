#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    long long ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
}