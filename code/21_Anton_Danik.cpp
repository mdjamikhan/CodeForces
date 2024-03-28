#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int countA = 0;
    int countD = 0;

    char a;
    while (n--)
    {
        cin >> a;
        if (a == 'A')
            countA++;
        else if (a == 'D')
            countD++;
    }
    if (countA > countD)
        cout << "Anton";
    else if (countA < countD)
        cout << "Danik";
    else
        cout << "Friendship";
}