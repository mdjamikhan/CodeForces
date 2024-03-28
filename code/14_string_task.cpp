#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string c = "";

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'y' && a[i] != 'o' && a[i] != 'u' && a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U' && a[i] != 'Y')
        {
            c += a[i];
        }
    }
    string ar = "";
    ar += ".";
    for (int i = 0; i < c.size(); i++)
    {
        ar += tolower(c[i]);
        if (i < c.size() - 1)
        {
            ar += ".";
        }
    }
    cout << ar;

    return 0;
}
