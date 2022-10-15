#include <bits/stdc++.h>
using namespace std;
int steps(int a)
{
    if (a == 1)
        return 1;
    if (a == 2)
        return 2;
    else
        return steps(a - 1) + steps(a - 2);
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", steps(a));
    return 0;
}