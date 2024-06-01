#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    while (n--)
    {
        cin >> a >> b >> c;

        if (a == b)
        {
            cout << c << endl;
        }
        else if (b == c)
        {
            cout << a << endl;
        }
        else if (c == a)
        {
            cout << b << endl;
        }
    }
}