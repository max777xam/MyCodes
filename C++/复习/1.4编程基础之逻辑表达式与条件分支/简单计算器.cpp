#include <bits/stdc++.h>
using namespace std;
int main()
{
    char op;
    int a, b;
    cin >> a >> b >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Divided by zero!" << endl;
            break;
        }
        else
        {
            cout << a / b << endl;
            break;
        }
    default:
        cout << "Invalid operator!" << endl;
        break;
    }
    return 0;
}