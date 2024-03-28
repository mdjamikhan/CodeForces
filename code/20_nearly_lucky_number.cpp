#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    // long long int r;
    while (n)
    {
        int r = n % 10;

        n /= 10;
        if (r == 7 || r == 4)
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
}