#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    vector<int> non_primes;

    for (int i = 2; i < 50; i++)
    {
        if (is_prime(i))
        {
            non_primes.push_back(i);
        }
    }

    int a, b;
    cin >> a >> b;

    bool found = false;
    for (int i = 1; i < non_primes.size(); i++)
    {
        if (non_primes[i - 1] == a && non_primes[i] == b)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
