#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            cout << 1;
            return 0;
        }
        else if (a[i] < b[i])
        {
            cout << -1;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}