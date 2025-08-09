#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long int sum = 1;
    for (int i = 1; i <= b; i++)
        sum *= a;
    cout << sum << endl;
    return 0;
}