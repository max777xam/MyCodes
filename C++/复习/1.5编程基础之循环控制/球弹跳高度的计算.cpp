#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h;
    cin >> h;
    double sum = 0.0;  // ��¼�ܸ߶�
    double height = h; // ��¼ÿ�ε����ĸ߶�
    for (int i = 1; i <= 10; i++)
    {
        sum += height;
        height = height / 2; // ÿ�ε����߶ȼ���
        sum += height;
    }
    cout << sum - height << endl;
    cout << height << endl;
    return 0;
}