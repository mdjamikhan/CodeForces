#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int a;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count++;
        }
    }
    if (count)
    {
        cout << "Hard";
    }
    else
    {
        cout << "Easy";
    }
}