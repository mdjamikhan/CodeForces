#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> times(t);
    for (int i = 0; i < t; ++i)
    {
        cin >> times[i];
    }

    for (const string &s : times)
    {
        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string suffix = (hour < 12) ? "AM" : "PM";

        if (hour == 0)
        {
            hour = 12;
        }
        else if (hour > 12)
        {
            hour -= 12;
        }

        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << " " << suffix << endl;
    }
    return 0;
}
