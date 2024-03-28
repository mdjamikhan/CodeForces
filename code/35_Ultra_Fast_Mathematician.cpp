#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string sum = "";
    for (int i = 0; i < s1.size(); i++)
    {
        if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1'))
        {
            sum += "1";
        }
        else
        {
            sum += "0";
        }
    }
    cout << sum;
}