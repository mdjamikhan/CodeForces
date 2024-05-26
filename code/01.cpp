#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> ans;
    int maxi = -1;
    for (int i = 10; i > 2; i--)
    {
        int gk = __gcd(i, 10) + i;
        if (gk < 10)
        {
            maxi = max(gk, maxi);
        }
    }
    cout << maxi;
}