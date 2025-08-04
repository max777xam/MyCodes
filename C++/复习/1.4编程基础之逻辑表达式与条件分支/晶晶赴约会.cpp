#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin >> day;
    if (day % 7 == 1 || day % 7 == 3 || day % 7 == 5)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}