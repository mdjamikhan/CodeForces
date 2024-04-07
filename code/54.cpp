#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prev = arr[0];
    int k = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (prev < arr[i] && prev < 10000)
        {
            count++;
            prev = arr[i];
        }
        if (k > arr[i] && k >= 1)
        {
            count++;
            k = arr[i];
        }
    }
    cout << count << endl;
}