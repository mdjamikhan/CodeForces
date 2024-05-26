#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int count1 = 0, count2 = 0;
    while (n--)
    {
        cin >> a >> b;
        if (a > b)
        {
            count1++;
        }
        else if (b > a)
        {
            count2++;
        }
        else if (a == b)
        {
            count1++;
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << "Mishka" << endl;
    }
    else if (count1 < count2)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << '\n';
    }
}