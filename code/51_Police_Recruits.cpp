#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int pos = 0;
    int sum = 0;
    while (n--)
    {
        cin >> a;
        if (a == -1)
        {
            if (pos > 0)
            {
                pos--;
            }
            else
            {
                sum++;
            }
        }
        else
        {
            pos += a;
        }
    }
    cout << sum << endl;
}