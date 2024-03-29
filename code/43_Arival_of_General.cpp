#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;

    int count = 0;
    int minVal = 10000;
    int x = 0;
    int y = 0;
    int maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a > maxVal)
        {
            maxVal = a;
            x = i;
        }
        if (a <= minVal)
        {
            minVal = a;
            y = i;
        }
    }
    if (x > y)
    {
        cout << (n - y - 1) + (x - 1);
    }
    else
    {
        cout << (x - 1) + (n - y);
    }
}