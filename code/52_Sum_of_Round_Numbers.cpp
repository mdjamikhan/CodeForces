#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int count = 0;
    int zero = 0;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int k = a;
        int l = a;
        while (a != 0)
        {
            // int dig = a % 10;
            a /= 10;
            count++;
        }
        string str = to_string(k);
        for (char p : str)
        {
            if (p == '0')
            {
                zero++;
            }
        }
        int d = 0, dig = 0;
        cout << count - zero << endl;
        count = 0;
        zero = 0;
        if (l >= 1000)
        {
            dig = l % 1000;
            arr[d++] = l - dig;
            l %= 1000;
        }
        if (l >= 100)
        {
            dig = l % 100;
            arr[d++] = l - dig;
            l %= 100;
        }
        if (l >= 10)
        {
            dig = l % 10;
            arr[d++] = l - dig;
            l %= 10;
        }
        if (l > 0 && l < 10)
        {
            arr[d++] = l;
        }
        vector<int> ans;
        for (int i = 0; i < d; i++)
        {
            ans.push_back(arr[i]);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}