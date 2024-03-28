#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[5] = {5, 4, 3, 2, 1};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        count += n / arr[i];
        n %= arr[i];
    }
    cout << count;
}