#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "##";
            }
            else
            {
                cout << "::";
            }
        }
        cout << endl;
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