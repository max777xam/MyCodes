#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    while (m--)
    {
        cin >> n;
        int a[n + 1];
        int i = 0;
        for (i = 0; i <= n; i++)
            cin >> a[i];
        for (; i >= 0; i--)
            cout << i * a[i] << " ";
        cout << endl;
    }
    return 0;
}