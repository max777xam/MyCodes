#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxHours = 0;
    int currentHours = 0;
    for (int i = 0; i < n; i++)
    {
        int systolic, diastolic;
        cin >> systolic >> diastolic;
        if (systolic >= 90 && systolic <= 140 && diastolic >= 60 && diastolic <= 90)
        {
            currentHours++;
            maxHours = max(maxHours, currentHours);
        }
        else
        {
            currentHours = 0;
        }
    }
    cout << maxHours << endl;
    return 0;
}