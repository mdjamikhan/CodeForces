#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string a;
    long long int sum = 0;
    while (n--)
    {
        cin >> a;
        if (a == "Icosahedron")
        {
            sum += 20;
        }
        else if (a == "Cube")
        {
            sum += 6;
        }
        else if (a == "Tetrahedron")
        {
            sum += 4;
        }

        else if (a == "Dodecahedron")
        {
            sum += 12;
        }
        else if (a == "Octahedron")
        {
            sum += 8;
        }
        else
        {
            sum += 0;
        }
    }
    cout << sum;
}