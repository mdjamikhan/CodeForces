#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a;

    cin >> a;
    if (a & 1)
    {
        cout << "YES" << endl;
        return;
    }
    while (a % 2 == 0)
    {
        a /= 2;
    }
    if (a > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    long long n;
    cin >> n;
    long long a;
    while (n--)
    {
        solve();
    }
}