#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int kvalue = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= kvalue && a[i] != 0)
        {
            count++;
        }
    }
    cout << count;
}