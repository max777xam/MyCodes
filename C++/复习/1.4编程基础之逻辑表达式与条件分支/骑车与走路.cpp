#include <bits/stdc++.h>
using namespace std;
int main()
{
    double dis;
    cin >> dis;
    double time1 = dis / 1.2;
    double time2 = dis / 3.0 + 50;
    if (time1 < time2)
    {
        cout << "Walk" << endl;
    }
    else if (time1 > time2)
    {
        cout << "Bike  " << endl;
    }
    else
    {
        cout << "All" << endl;
    }
    return 0;
}