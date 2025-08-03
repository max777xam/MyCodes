#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, reversedNum = 0;
    cin >> num;
    while (num > 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    cout << setw(3) << setfill('0') << reversedNum << endl;
    return 0;
}