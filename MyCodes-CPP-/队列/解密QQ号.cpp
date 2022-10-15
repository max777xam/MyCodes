#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main()
{
    string st;
    int a[101], n = 0;
    cin >> st;
    for (int i = 0; i < st.size(); i++)
    {
        int x = st[i] - '0';
        q.push(x);
    }
    while (!q.empty())
    {
        a[++n] = q.front();
        q.pop();
        q.push(q.front());
        q.pop();
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }

    return 0;
}