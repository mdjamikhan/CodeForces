#include <bits/stdc++.h>
using namespace std;
int solve(int i, int j, int right, int left)
{
    if (i == 0 && j == 0)
        return 1;
    if (right < 0 || left < 0)
        return 0;

    return solve(i - 1, j, right - 1, left) + solve(i, j - 1, right, left - 1);
}
int main()
{
    int n, m, right, left;
    cin >> n >> m;
    cin >> right >> left;
    cout << solve(n - 1, m - 1, right, left);
}
