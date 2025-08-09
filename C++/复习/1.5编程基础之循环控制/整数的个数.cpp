#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a = 0, b = 0, c = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            a++;
        else if (x == 5)
            b++;
        else if (x == 10)
            c++;
    }
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}