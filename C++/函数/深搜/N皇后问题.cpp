#include <bits/stdc++.h>
using namespace std;
int queen[100];
int hls;
int PLACE(int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        if (queen[i] == queen[x] || abs(queen[i] - queen[x]) == abs(x - i))
        {
            return 0;
        }
    }
    return 1;
}
void NQUEENS(int dep)
{
    if (hls == 3 || hls == 2)
    {
        printf("no solute!");
        return;
    }
    for (int i = 0; i < hls; i++)
    {
        queen[dep] = i;
        if (PLACE(dep))
        {
            if (dep == hls - 1)
            {
                for (int i = 0; i < hls; i++)
                {
                    printf("%d ", queen[i] + 1);
                }
                printf("\n");
            }
            NQUEENS(dep + 1);
        }
    }
}
int main()
{
    scanf("%d", &hls);
    NQUEENS(0);
    printf("\n");
    return 0;
}