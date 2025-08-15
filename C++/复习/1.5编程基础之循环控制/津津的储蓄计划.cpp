#include <bits/stdc++.h>
using namespace std;
int main()
{
    int money = 0, s = 0, b, t;
    for (int i = 1; i <= 12; ++i)
    {
        cin >> b;
        if (money + 300 >= b)
        {
            t = money + 300 - b;
            money = t % 100;
            s += t - money;
        }
        else
        {
            cout << -i;
            return 0;
        }
    }
    cout << s * 1.2 + money << endl;
    return 0;
}