#include <bits/stdc++.h>
using namespace std;
int main()
{
    double weight;
    cin >> weight;
    char type;
    cin >> type;
    int base = 8;
    if (weight > 1000)
    {
        base += ceil((weight - 1000) / 500) * 4;
    }
    if (type == 'y')
    {
        base += 5;
    }
    cout << base << endl;
    return 0;
}