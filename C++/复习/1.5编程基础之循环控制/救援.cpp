#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double time = 0;
    for (int i = 0; i < n; i++)
    {
        double a, b;
        int c;
        cin >> a >> b >> c;
        double dis = sqrt(a * a + b * b);
        double t = (dis / 50) * 2 + c + 0.5 * c;
        time += t;
    }
    cout << ceil(time) << endl;
    return 0;
}