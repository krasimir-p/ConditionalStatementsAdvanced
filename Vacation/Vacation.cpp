#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double budget;
    string season;
    cin >> budget >> season;

    double price = 0;
    
    cout << fixed << setprecision(2);
    if (budget <= 1000) {
        if (season == "Summer") {
            cout << "Alaska";
            price = budget * 0.65;
        }
        else {
            cout << "Morocco";
            price = budget * 0.45;
        }
        cout << " - Camp - " << price << endl;
    }
    else if (budget <= 3000) {
        if (season == "Summer") {
            cout << "Alaska";
            price = budget * 0.8;
        }
        else {
            cout << "Morocco";
            price = budget * 0.6;
        }
        cout << " - Hut - " << price << endl;
    }
    else {
        if (season == "Summer") {
            cout << "Alaska";
        }
        else {
            cout << "Morocco";
        }
        price = budget * 0.9;
        cout << " - Hotel - " << price << endl;
    }

    return 0;
}
