#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string p = "codeforces";
    // vector<string> ans;
    // ans.push_back(p);
    int count = 0;
    char att;
    while (n--)
    {
        cin >> att;

        count = 0;
        for (auto it : p)
        {
            if (att == it)
            {
                count++;
                break;
            }
        }
        if (count)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}