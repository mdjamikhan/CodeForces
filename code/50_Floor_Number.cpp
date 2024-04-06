#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a, b, c = 2;
    long long count = 1;
    while (n--)
    {
        cin >> a >> b;
        while (c < a)
        {
            c += b;
            count++;
        }

        cout << count << endl;
        count = 1;
        c = 2;
    }
}