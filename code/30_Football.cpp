#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int count_zero = 0;
    int count_one = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
        {
            count_zero++;
            count_one = 0;
            if (count_zero >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            count_zero = 0;
            count_one++;
            if (count_one >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
