#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;

    while (n--)
    {
        cin >> a >> b;

        int diff = abs(a - b);

        int steps = diff / 10;

        if (diff % 10 != 0)
        {
            steps += 1;
        }

        cout << steps << endl;
    }

    return 0;
}
