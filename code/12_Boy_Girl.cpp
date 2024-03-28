#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int count = 0;
    unordered_set<char> se;
    for (char c : a)
    {
        se.insert(c);
    }
    int n = se.size();
    if (n % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
