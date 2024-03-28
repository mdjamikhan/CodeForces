#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    double m = n;
    long long sum = 0;
    double a;
    if (n > 100)
        return 0;
    while (n--)
    {
        cin >> a;
        sum += a;
    }
    double ans = 0.0;
    ans = sum / m;
    cout << fixed << setprecision(12) << ans << endl;
}