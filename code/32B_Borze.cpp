#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.size();

    if (a[0] == '.')
    {
        cout << 0;
    }
    else
    {
        for (int i = 1; i < n - 1; i += 2)
        {
            if (a[i - 1] == '-' && a[i] == '-')
            {
                cout << 2;
            }
            else if (a[i - 1] == '-' && a[i - 1] == '.')
            {
                cout << 1;
            }
        }
    }
}