#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Take the day number and print the corresponding day
    for 1 print Monday and so on.
    */
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
        break;
    }
    return 0;
}