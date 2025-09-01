#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    int a[10];
    int i = 0;
    while (n)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
    return 0;
}