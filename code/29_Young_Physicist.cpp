#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, y, z;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    while (n--)
    {
        cin >> x >> y >> z;

        sumx += x;
        sumy += y;
        sumz += z;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}