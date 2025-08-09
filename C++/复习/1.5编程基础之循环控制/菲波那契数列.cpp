#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << a << endl;
    return 0;
}