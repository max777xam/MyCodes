#include<bits/stdc++.h>
using namespace std;
int n, a[10001], b[10001];
bool f[100001];
int ans = 1, k;
void bfs()
{
    queue<int>m;
    m.push(n);
    f[n] = 1;
    int wei = 1;
    while (!m.empty())
    {
        int x = m.front();
        wei = 1;
        while (x > 0)
        {
            int temp = x % 10;
            for (int i = 1;i <= k;i++)
            {
                if (a[i] == temp)
                {
                    int y = m.front() + (b[i] - temp) * wei;
                    if (!f[y])
                    {
                        ans++;
                        f[y] = true;
                        m.push(y);
                    }
                }
            }
            x /= 10;
            wei *= 10;
        }
        m.pop();
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1;i <= k;i++)
    {
        cin >> a[i] >> b[i];
    }
    bfs();
    cout << ans << endl;
    return 0;
}