#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin >> arr;
    string b = "hello";
    int j = 0;

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == b[j])
        {
            j++;
            count++;
        }
    }
    if (count == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}