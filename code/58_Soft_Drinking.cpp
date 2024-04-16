#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int value1 = l * k;
    int value2 = c * d;
    int value3 = p / np;

    int k0 = min(value1 / nl, min(value2, value3)) / n;
    cout << k0;
}