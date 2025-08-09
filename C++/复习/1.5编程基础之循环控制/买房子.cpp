#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int sum = 0;
    double fj = 200;
    for (int i = 1; i <= 20; i++)
    {
        sum += N;
        if (sum >= fj)
        {
            cout << i << endl;
            break;
        }
        else
        {
            if (i == 20)
            {
                cout << "Impossible" << endl;
            }
            fj += fj * K / 100;
            continue;
        }
    }
    return 0;
}