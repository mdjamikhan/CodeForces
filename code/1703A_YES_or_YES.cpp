#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    string c = "";
    while (n--)
    {
        cin >> a;
        for (char &it : a)
        {
            it = tolower(it);
        }

        if (a == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}