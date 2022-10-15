#include <bits/stdc++.h>
using namespace std;
int b, g, t;
queue<int> q1, q2;
int main()
{
    cin >> b >> g >> t;
    for (int i = 1; i <= b; i++)
    {
        q1.push(i);
    }
    for (int i = 1; i <= g; i++)
    {
        q2.push(i);
    }
    for (int i = 1; i <= t; i++)
    {
        cout << q1.front() << " " << q2.front() << endl;
        q1.push(q1.front());
        q1.pop();
        q2.push(q2.front());
        q2.pop();
    }
    return 0;
}