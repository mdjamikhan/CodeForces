#include <bits/stdc++.h>
using namespace std;
void sum(int a)
{
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    for (int i = 1; i <= a - 1; i++)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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