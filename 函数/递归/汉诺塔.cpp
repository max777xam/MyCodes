#include <bits/stdc++.h>
using namespace std;
int k;
void hanoi(int n, char a, char c, char b)
{
    if (n == 0)
        return;
    hanoi(n - 1, a, b, c);
    printf("%c->%d->%c\n", a, n, b);
    hanoi(n - 1, c, a, b);
}
int main()
{
    int n;
    cin >> n;
    char a, b, c;
    cin >> a >> b >> c;
    hanoi(n, a, c, b);
    return 0;
}