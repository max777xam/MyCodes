#include<bits/stdc++.h>
using namespace std;
const int maxn = INT_MAX;
struct Node
{
    int num, d;
};
int A, B;
int vis[100000];
void BFS()
{
    queue<Node> q;
    q.push((Node) { A, 0 });
    while (!q.empty())
    {
        Node u = q.front(); q.pop();
        int tmp = u.num;
        if (tmp == B) { cout << u.d; return; }
        for (int i = 15;i >= 0;i--)
        {
            int x = (15 - i) / 4, y = (15 - i) % 4, w = 1 << i, z;
            if (y < 3 && (tmp & (1 << i)) != (tmp & (1 << i - 1)))
            {
                z = 1 << i - 1;
                if (!vis[tmp ^ z ^ w])
                {
                    vis[tmp ^ z ^ w] = 1;
                    q.push((Node) { tmp ^z ^w, u.d + 1 });
                }
            }
            if (x < 3 && (tmp & (1 << i)) != (tmp & (1 << i - 4)))
            {
                z = 1 << i - 4;
                if (!vis[tmp ^ z ^ w])
                {
                    vis[tmp ^ z ^ w] = 1;
                    q.push((Node) { tmp ^z ^w, u.d + 1 });
                }
            }
        }
    }
}
int main()
{
    char c;
    for (int i = 15;i >= 0;i--)
    {
        cin >> c;
        if (c != '0')  A += 1 << i;
    }
    for (int i = 15;i >= 0;i--)
    {
        cin >> c;
        if (c != '0')  B += 1 << i;
    }
    if (A == B) cout << 0;
    else BFS();
}