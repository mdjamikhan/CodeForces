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
    sort(a, a + n);
    int sum = 0;
    int take = a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        sum += take - a[i];
    }
    cout << sum;
}