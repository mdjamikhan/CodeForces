#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        if (a <= b)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << b << " " << a << endl;
        }
    }
}
