#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[3];
    int a, b, c;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a >= b && a >= c)
        {
            if (a == b + c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (b >= a && b >= c)
        {
            if (b == a + c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (c >= a && c >= b)
        {
            if (c == a + b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}