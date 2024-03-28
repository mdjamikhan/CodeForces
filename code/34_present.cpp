#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int j = 0;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        ans[a] = i;
    }
    cout << ans[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << ans[i];
    }
}