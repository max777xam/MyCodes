#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // �������
    int sign = 1;
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10; // ȡ�����һλ���ӵ���ת����ĩβ
        n /= 10;                           // ȥ�����һλ
    }
    // �ָ����Ų����
    cout << sign * reversed << endl;
    return 0;
}
