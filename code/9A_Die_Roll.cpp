#include <bits/stdc++.h>
using namespace std;
int main()
{

    int y, w;
    cin >> y >> w;
    int k = max(y, w);
    int diff = 6 - k + 1;
    if (6 % diff == 0)
    {
        cout << 1 << "/" << 6 / diff;
    }
    else
    {
        int p = 6 - diff;
        cout << diff / p << "/" << 6 / p;
    }
}