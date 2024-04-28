#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int t;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t + k <= 5)
        {
            count++;
        }
    }
    cout << count / 3;
}