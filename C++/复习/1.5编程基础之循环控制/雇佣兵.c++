#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, X;
    cin >> M >> N >> X;
    while (true)
    {
        int need = (M + N - 1) / N;
        if (X < need)
        {
            break;
        }
        X -= need;
        N += M / N;
    }
    cout << N << endl;
    return 0;
}