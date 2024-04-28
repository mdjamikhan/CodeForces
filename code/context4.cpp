#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 1)
    {
        cout << "##" << endl;
        cout << "##" << endl;
    }
    else
    {

        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                cout << (i / 2 + j / 2 & 1 ? '.' : '#');
            }
            cout << endl;
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
        fun(a);
    }
}