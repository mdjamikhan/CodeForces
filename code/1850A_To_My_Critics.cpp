#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        sort(ans.rbegin(), ans.rend());
        int sum = ans[0] + ans[1];
        if (sum >= 10)
        {
            cout << "YES" << endl;
            sum = 0;
        }
        else
        {
            cout << "NO" << endl;
            sum = 0;
        }
    }
}