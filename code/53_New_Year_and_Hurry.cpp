#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    int diff = 240 - a;
    int sum = 0;
    int count = 0;
    for (int i = 1; i <= diff; i++)
    {
        sum += 5 * i;
        if (sum <= diff)
        {
            count++;
            if (count == n)
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    cout << count;
}