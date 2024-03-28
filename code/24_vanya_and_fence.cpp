#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a;
    int count = 0;
    while (n--)
    {
        cin >> a;
        if (h < a)
        {
            count += 2;
        }
        else
        {
            count += 1;
        }
    }
    cout << count;
}