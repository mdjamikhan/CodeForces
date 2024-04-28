#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin >> n;
    string k;
    while (n--)
    {
        cin >> a;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (i == 0)
            {
                k += a[i];
            }
            if (a[i] == a[i - 1])
            {
                k += a[i];
                i++;
            }
        }
        k += a[a.size() - 1];
        cout << k << endl;
        k = "";
    }
}