#include <bits/stdc++.h>
using namespace std;
void convertToBase(int num, int base, int digits[3])
{
    for (int i = 2; i >= 0; i--)
    {
        digits[i] = num % base;
        num /= base;
    }
}
int main()
{
    for (int num = 100; num <= 342; num++)
    {
        int base7[3], base9[3];
        convertToBase(num, 7, base7);
        convertToBase(num, 9, base9);
        if (base7[0] == base9[2] && base7[1] == base9[1] && base7[2] == base9[0])
        {
            cout << num << endl;
            cout << base7[0] << base7[1] << base7[2] << endl;
            cout << base9[0] << base9[1] << base9[2] << endl;
            return 0;
        }
    }
    return 0;
}
