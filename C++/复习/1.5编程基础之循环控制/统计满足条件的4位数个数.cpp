#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    int count = 0; 
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num; 
        int thousands = num / 1000;       
        int hundreds = (num / 100) % 10;  
        int tens = (num / 10) % 10;        
        int units = num % 10;            
        if (units - thousands - hundreds - tens > 0) 
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}