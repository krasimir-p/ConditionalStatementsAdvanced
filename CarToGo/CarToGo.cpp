#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double budget;
    cin >> budget;
    string season;
    cin >> season;

    cout << fixed << setprecision(2);
    if (budget <= 100) {
        cout << "Economy class" << endl;
        if (season == "Summer") {
            cout << "Cabrio - " << budget * 0.35 << endl;
        }
        else {
            cout << "Jeep - " << budget * 0.65 << endl;
        }
    }
    else if (budget<=500) {
        cout << "Compact class" << endl;
        if (season == "Summer") {
            cout << "Cabrio - " << budget * 0.45 << endl;
        }
        else {
            cout << "Jeep - " << budget * 0.8 << endl;
        }
    }
    else {
        cout << "Luxury class" << endl;
        cout << "Jeep - " << budget * 0.9 << endl;
    }

    return 0;
}
