#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, k;
    cin >> m >> k;
    int cnt = 0;
    if (m % 19 == 0)
    {
        while (m)
        {
            if (m % 10 == 3)
                cnt++;
            m /= 10;
        }
        if (cnt == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}