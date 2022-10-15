#include <bits/stdc++.h>
using namespace std;
string st;
void dg(string st)
{
    if (st.size() == 0)
        return;
    cout << st[(st.size() + 1) / 2 - 1];
    dg(st.substr(0, (st.size() + 1) / 2 - 1));
    dg(st.substr((st.size() + 1) / 2));
}
int main()
{
    cin >> st;
    dg(st);
    return 0;
}