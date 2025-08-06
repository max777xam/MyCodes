#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double samples[101];
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> samples[i];
        sum += samples[i];
    }
    double mean = sum / n;
    cout << fixed << setprecision(4) << mean << endl;
    return 0;
}