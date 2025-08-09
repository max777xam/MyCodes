#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R, M, Y;
    cin >> R >> M >> Y;
    double sum = M;
    for (int i = 1; i <= Y; i++)
    {
        sum += sum * R / 100;
    }
    M = sum;
    printf("%d", M);
    return 0;
}