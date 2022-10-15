#include <bits/stdc++.h>
using namespace std;
string s1;
int len;
void dxsc(int a)
{
    if (a == len - 1)
    {
        cout << s1[a];
        return;
    }
    dxsc(a + 1);
    cout << s1[a];
}
int main()
{
    cin >> s1;
    len = s1.size();
    dxsc(0);
    return 0;
}