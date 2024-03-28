#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i < n; i++)

    {

        if (a[i] < b[i] && b[i] < c[i])
        {
            cout << "STAIR" << endl;
        }
        else if (a[i] < b[i] && c[i] < b[i])
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
}
