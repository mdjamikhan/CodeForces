#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> ans;
        int a, b, c;
        cin >> a >> b >> c;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        sort(ans.begin(), ans.end());
        cout << ans[1] << endl;
    }
}
