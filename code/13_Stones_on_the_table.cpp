#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    int i = 0;
    while (i < n - 1)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        i++;
    }
    cout << count;
}