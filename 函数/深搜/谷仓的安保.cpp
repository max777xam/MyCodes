#include <bits/stdc++.h>
using namespace std;
int L, C, yuan, fu;
char a[101], b[101];
void dfs(int dep, int lst)
{
    if (dep == L + 1)
    {
        if (yuan >= 1 && fu >= 2)
        {
            for (int i = 1; i <= L; i++)
                cout << b[i];
            cout << endl;
        }
        return;
    }
    for (int i = lst; i <= C; i++)
    {

        b[dep] = a[i];
        if (b[dep] == 'a' || b[dep] == 'e' || b[dep] == 'i' || b[dep] == 'o' || b[dep] == 'u') //判断是不是元音
            yuan++;                                                                            //元音个数加1
        else
            fu++;
        dfs(dep + 1, i + 1);
        if (b[dep] == 'a' || b[dep] == 'e' || b[dep] == 'i' || b[dep] == 'o' || b[dep] == 'u')
            yuan--;
        else
            fu--;
        b[dep] = 0;
    }
}
int main()
{
    cin >> L >> C;
    for (int i = 1; i <= C; i++)
        cin >> a[i];
    sort(a + 1, a + C + 1);
    dfs(1, 1);
    return 0;
}