#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a[12];
    float sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << fixed << setprecision(2) << '$' << sum / 12 << endl;
    return 0;
}
