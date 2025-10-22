#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    bool a[5005] = {};
    for (int i = 2; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j % i == 0)
            {
                a[j] = !a[j];
            }
        }
    }
    bool flag = true;
    for (int i = 1; i <= N; i++)
    {
        if (a[i] == 0)
        {
            if (flag)
                flag = false;
            else
                cout << ",";
            cout << i;
        }
    }
    cout << endl;
    return 0;
}
