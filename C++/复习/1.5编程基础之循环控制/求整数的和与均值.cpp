#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int a[10001], tot;
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    tot = sum;
    cout << tot << ' ' << fixed << setprecision(5) << sum / n << endl;
    return 0;
}