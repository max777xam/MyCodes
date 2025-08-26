#include <bits/stdc++.h>
using namespace std;
int main()
{
    double sum = 0.0;
    int x;
    cin >> x;
    for (int i = 1;; i++)
    {
        sum += 1.0 / i;
        if (sum > x)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}