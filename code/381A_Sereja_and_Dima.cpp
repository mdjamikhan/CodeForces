#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = 0;
    int last = n - 1;

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[j] > a[last])
        {
            if (i % 2 == 0)
                sum1 += a[j];
            else
                sum2 += a[j];
            j++;
        }
        else
        {
            if (i % 2 == 0)
                sum1 += a[last];
            else
                sum2 += a[last];

            last--;
        }
    }
    cout << sum1 << " " << sum2 << endl;
}