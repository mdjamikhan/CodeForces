#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1001];
    int n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        arr[count++] = s[i] - '0';
    }
    sort(arr, arr + count);
    for (int i = 0; i < count; i++)
    {
        cout << arr[i];
        if (count - 1 == i)
        {
            break;
        }
        cout << "+";
    }
}