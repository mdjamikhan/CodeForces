#include <bits/stdc++.h>
using namespace std;
void sum(int n)
{
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int i = 1;

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 1)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a;
    while (n--)
    {
        cin >> a;

        sum(a);
    }
}