#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double VIP_PRICE = 499.99;
    const double NORMAL_PRICE = 249.99;
    
    const double TO_4 = 0.75;
    const double FROM_5_T0_9 = 0.6;
    const double FROM_10_TO_24 = 0.5;
    const double FROM_25_TO_49 = 0.4;
    const double FROM_50_OR_MORE = 0.25;

    double budget;
    cin >> budget;
    string vipOrNormal;
    cin >> vipOrNormal;
    int personsNumber;
    cin >> personsNumber;

    double moneyForMatch = 0;
    if (vipOrNormal == "VIP") {
        moneyForMatch = personsNumber * VIP_PRICE;
    }
    else {
        moneyForMatch = personsNumber * NORMAL_PRICE;
    }

    double moneyForTransport = 0;
    if (personsNumber <= 4) {
        moneyForTransport = TO_4 * budget;
    }
    else if (personsNumber <= 9) {
        moneyForTransport = FROM_5_T0_9 * budget;
    }
    else if (personsNumber <= 24) {
        moneyForTransport = FROM_10_TO_24 * budget;
    }
    else if (personsNumber <= 49) {
        moneyForTransport = FROM_25_TO_49 * budget;
    }
    else
    {
        moneyForTransport = FROM_50_OR_MORE * budget;
    }

    double expenses = moneyForTransport + moneyForMatch;

    cout << fixed << setprecision(2);

    if (budget >= expenses) {
        cout << "Yes! You have " << budget - expenses << " leva left." << endl;
    }
    else {
        cout << "Not enough money! You need " << expenses - budget << " leva." << endl;
    }

    return 0;
}
