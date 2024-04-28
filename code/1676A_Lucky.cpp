#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    int sum1 = 0;
    int sum2 = 0;

    while (n--)
    {
        cin >> a;
        int m = a.size();

        for (int i = 0; i < 3; i++)
        {
            sum1 += a[i];
        }
        for (int i = m - 1; i >= 3; i--)
        {
            sum2 += a[i];
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
            sum1 = 0;
            sum2 = 0;
            m = 0;
        }
        else
        {
            cout << "NO" << endl;
            sum1 = 0;
            sum2 = 0;
            m = 0;
        }
    }
}