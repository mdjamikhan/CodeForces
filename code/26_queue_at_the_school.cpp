#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    string s;

    cin >> n >> a >> s;
    while (a--)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
    }
    cout << s << endl;
}