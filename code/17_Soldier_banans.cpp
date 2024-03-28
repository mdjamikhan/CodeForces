#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += k * i;
    }
    if (sum <= n)
    {
        cout << 0;
    }
    else
    {
        cout << sum - n;
    }
}