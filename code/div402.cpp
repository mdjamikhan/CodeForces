#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, r;
    int count = 0;
    while (n--)
    {
        cin >> s;

        for (int i = 1; i <= s.length() - 1; i++)
        {
            if (s[i] != s[i - 1])
            {
                swap(s[i], s[i - 1]);
                count = 1;
                break;
            }
        }
        if (count)
        {
            cout << "YES" << endl;
            cout << s << endl;
            count = 0;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
