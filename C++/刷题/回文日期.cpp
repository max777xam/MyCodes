#include<bits/stdc++.h>
using namespace std;
int l, r;
int n[9];
int ans = 0;
int months[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool check2(int date)
{
    int year = date / 10000;
    int month = date % 10000 / 100;
    int day = date % 100;
    if (!month || month > 13 || !day) return false;
    if (month != 2 && day > months[month]) return false;
    if (month == 2)
    {
        bool leap = year % 4 == 0 && year % 100 || year % 400 == 0;
        if (day > 28 + leap) return false;
    }
    return true;
}
bool check(int x)
{
    int d = x, t;
    int i = 8;
    bool flag = true;
    while (d)
    {
        t = d % 10;
        d /= 10;
        n[i--] = t;
    }
    for (int i = 1;i <= 4;++i)
    {
        if (n[i] != n[9 - i])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    cin >> l >> r;
    for (int i = l;i <= r;i++)
    {
        if (!check2(i))
            continue;
        if (check(i))
            ans++;
    }
    printf("%d", ans);
    return 0;
}