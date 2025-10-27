#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0.0;
    double p = 1.0; // p1 = 1
    double q = 2.0; // q1 = 2
    for (int i = 1; i <= n; i++)
    {
        sum += q / p;
        double next_q = q + p; // q_{i+1} = q_i + p_i
        double next_p = q;     // p_{i+1} = q_i
        p = next_p;
        q = next_q;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}