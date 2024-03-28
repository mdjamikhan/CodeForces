#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string a;
    cin >> a;

    set<char> ans;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    for (int i = 0; i < n; i++)
    {

        ans.insert(a[i]);
    }

    if (ans.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}