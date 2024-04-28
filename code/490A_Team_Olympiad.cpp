// #include <bits/stdc++.h>
// using namespace std;
// bool customComparator(const std::pair<int, int> &a, const std::pair<int, int> &b)
// {
//     return a.first < b.first;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     int count = 0, count2 = 0, count3 = 0;
//     vector<int> prog, math, phy;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//         if (a[i] == 1)
//             prog.push_back(i);
//         else if (a[i] == 2)
//             math.push_back(i);
//         else if (a[i] == 3)
//             phy.push_back(i);
//     }
//     int take = min(prog.size(), min(math.size(), phy.size()));
//     cout << take << endl;
//     for (int i = 0; i < take; i++)
//     {
//         cout << prog[i] << " " << math[i] << " " << phy[i] << endl;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        for (int i = 2; i < 64; i++)
        {
            if (b % i == 0)
            {
                cout << i << endl;
            }
            break;
        }
    }
}
