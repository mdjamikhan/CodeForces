#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    vector<char> d(a.begin(), a.end());
    for (int i = 0; i < b.size(); i++)
    {
        d.push_back(b[i]);
    }
    int count = 0;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if (d.size() != c.size())
    {
        cout << "NO";
        return 0;
    }
    else
    {
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i] == c[i])
            {
                count++;
            }
        }
    }
    if (count == d.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}