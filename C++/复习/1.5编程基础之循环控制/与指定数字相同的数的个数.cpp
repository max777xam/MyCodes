#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == m)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}