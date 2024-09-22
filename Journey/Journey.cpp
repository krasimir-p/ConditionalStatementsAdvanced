#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double budget;
    cin >> budget;
    string season;
    cin >> season;

    string destination;
    string accomodation;
    double price = 0;

    if(budget<=100){
        destination = "Bulgaria";
        if (season == "summer") {
            accomodation = "Camp";
            price = budget * 0.3;
        }
        else if (season == "winter") {
            accomodation = "Hotel";
            price = budget * 0.7;
        }
    }
    else if (budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            accomodation = "Camp";
            price = budget * 0.4;
        }
        else if (season == "winter") {
            accomodation = "Hotel";
            price = budget * 0.8;
        }
    }
    else if (budget > 1000) {
        destination = "Europe";
        accomodation = "Hotel";
        price = budget * 0.9;
    }

    cout << "Somewhere in " << destination << endl;
    cout << accomodation << " - " << fixed << setprecision(2) << price << endl;

    return 0;
}
