#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int p = 0;
    int q = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                p = i;
                q = j;
            }
        }
    }
    int l = 2;
    int m = 2;
    int diff = abs(l - p) + abs(m - q);
    cout << diff;
}