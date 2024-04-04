#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a;
    while (n--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            cout << a / 2 - 1 << endl;
        }
        else
        {
            cout << a / 2 << endl;
        }
    }
}