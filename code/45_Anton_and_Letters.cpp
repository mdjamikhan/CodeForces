#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    set<char> s;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '{')
            continue;
        else if (a[i] == '}')
            continue;
        else if (a[i] == ',')
            continue;
        else if (a[i] == ' ')
            continue;
        else
        {
            s.insert(a[i]);
        }
    }
    cout << s.size();
}