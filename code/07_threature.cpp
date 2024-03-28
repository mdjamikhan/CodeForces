#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a, b, c;
    cin >> a >> b >> c;
    unsigned long long value = (ceil(double(a) / c) * ceil(double(b) / c));
    cout << value << endl;
}