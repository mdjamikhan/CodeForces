#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int a, b;
    vector<int> ans;
    while (n--)
    {
        cin >> a >> b;
        int diff = a % b;
        if (diff == 0)
        {
            ans.push_back(diff);
        }
        else
        {
            if (a > b)
            {
                int mul = a / b;
                // int take1 = mul * b;
                int take1 = (mul + 1) * b;
                // int maxi = min(a - take1, abs(a - take2));
                ans.push_back(take1 - a);
            }
            else
            {
                int mul = b - a;
                ans.push_back(mul);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}