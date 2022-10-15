#include<bits/stdc++.h>
using namespace std;
int horse[12][2] = { {2,2},{2,-2},{-2,2},{-2,-2},{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1} };
int pre[1000000];
void step(int x)
{
    int sum = 0;
    while (pre[x])
    {
        sum++;
        x = pre[x];
    }
    printf("%d\n", sum);
}
void bfs(int a, int b)
{
    int book[101][101] = { 0 };
    int que1[10000] = { 0 };
    int que2[10000] = { 0 };
    int hen, zon;
    if (a == 1 && b == 1)
    {
        printf("0");
        return;
    }
    int head = 0;
    int tail = 1;
    que1[1] = 1;
    que2[1] = 1;
    book[1][1] = 1;
    while (head != tail)
    {
        head++;
        for (int i = 0;i < 12;i++)
        {
            hen = que1[head] + horse[i][0];
            zon = que2[head] + horse[i][1];
            if (hen <= 100 && zon <= 100 && book[hen][zon] == 0 && hen > 0 && zon > 0)
            {
                tail++;
                que1[tail] = hen;
                que2[tail] = zon;
                book[hen][zon] = 1;
                pre[tail] = head;
                if (hen == a && zon == b)
                {
                    step(tail);
                    head = tail;
                    break;
                }
            }
        }
    }
}
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    scanf("%d%d", &c, &d);
    bfs(a, b);
    bfs(c, d);
    return 0;
}