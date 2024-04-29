#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{

    int arr[n];
    int k = 0;
    int sum1 = 0;
    int sum2 = 0;
    if (n % 4 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
            sum1 += i;
        }
        for (int i = 1; i < n - 2; i += 2)
        {
            cout << i << " ";
            sum2 += i;
        }
        cout << sum1 - sum2 << endl;
    }
}
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> ans;
    int a;
    while (n--)
    {
        cin >> a;
        fun(a);
    }
}