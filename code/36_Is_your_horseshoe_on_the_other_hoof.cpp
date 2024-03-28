#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int a[4];
    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == a[i + 1])
            mini++;
    }
    cout << mini;
}