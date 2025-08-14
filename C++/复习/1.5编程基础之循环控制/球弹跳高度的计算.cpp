#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h;
    cin >> h;
    double sum = 0.0;  // 记录总高度
    double height = h; // 记录每次弹跳的高度
    for (int i = 1; i <= 10; i++)
    {
        sum += height;
        height = height / 2; // 每次弹跳高度减半
        sum += height;
    }
    cout << sum - height << endl;
    cout << height << endl;
    return 0;
}