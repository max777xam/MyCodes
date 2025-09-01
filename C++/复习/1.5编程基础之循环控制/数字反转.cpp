#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // 处理符号
    int sign = 1;
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10; // 取出最后一位并加到反转数的末尾
        n /= 10;                           // 去掉最后一位
    }
    // 恢复符号并输出
    cout << sign * reversed << endl;
    return 0;
}
