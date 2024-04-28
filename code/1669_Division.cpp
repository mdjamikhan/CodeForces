#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    while (n--)
    {
        cin >> a;
        if (a >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (a >= 1600 && a <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (a >= 1400 && a <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (a <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }
}