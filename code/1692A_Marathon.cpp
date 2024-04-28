#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long a, b, c, d;
    int count = 0;
    while (n--)
    {
        cin >> a >> b >> c >> d;
        if (a < b)
            count++;
        if (a < c)
            count++;
        if (a < d)
            count++;
        cout << count << endl;
        count = 0;
    }
}