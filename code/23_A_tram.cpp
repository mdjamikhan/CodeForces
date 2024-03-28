#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int maxi = 0;
    int diff = 0;
    while (n--)
    {
        cin >> a >> b;

        diff += b - a;
        maxi = max(maxi, diff);
    }
    cout << maxi << endl;
}