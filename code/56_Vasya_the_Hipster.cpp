#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    int diff = abs(a - b);
    cout << diff / 2;
}