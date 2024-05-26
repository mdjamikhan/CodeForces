#include <bits/stdc++.h>
using namespace std;

void tests()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a != min(a, b))
    {
        int temp = min(a, b);
        b = a;
        a = temp;
    }
    if ((c > a && d > a && c < b && d < b) || (c > b || c < a) && (d > b || d < a))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        tests();
    }
}