#include <iostream>

using namespace std;

int main()
{
    int hour;
    string day;
    string status;
    cin >> hour >> day;

    if (day == "Sunday") {
        status = "closed";
    }
    else {
        if (10 <= hour && hour <= 18) {
            status = "open";
        }
        else {
            status = "closed";
        }
    }

    cout << status << endl;

    return 0;
}
