#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, r;
    cin >> h >> r;
    double bucketVolume = M_PI * r * r * h;
    const double requiredWater = 20000.0;
    double buckets = requiredWater / bucketVolume;
    cout << ceil(buckets) << endl;
    return 0;
}