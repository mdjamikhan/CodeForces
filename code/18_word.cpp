#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string s = "";
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (islower(a[i]))
            count++;
        else
            count2++;
    }
    if (count < count2)
    {
        for (int i = 0; i < a.size(); i++)
        {
            s += toupper(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            s += tolower(a[i]);
        }
    }
    cout << s;
}