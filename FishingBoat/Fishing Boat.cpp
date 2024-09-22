#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SPRING_TIME_PRICE = 3000;
    const int SUMMER_AUTUMN_TIME_PRICE = 4200;
    const int WINTER_TIME_PRICE = 2600;

    const double TO_6_PERSONS_DISCOUNT = 0.1;
    const double BETWEEN_7_11_PERSONS_DISCOUNT = 0.15;
    const double ABOVE_12_PERSONE_DISCOUNT = 0.25;
    const double EVEN_NUMBER_FISHERMENS_DISCOUNT = 0.05;

    int budget;
    cin >> budget;
    string season;
    cin >> season;
    int fishermensNumber;
    cin >> fishermensNumber;
    
    double price = 0;

    if (season == "Spring") { price = SPRING_TIME_PRICE; }
    else if(season=="Summer" || season == "Autumn"){ price = SUMMER_AUTUMN_TIME_PRICE; }
    else { price = WINTER_TIME_PRICE; }

    if (fishermensNumber <= 6) { price *= (1 - TO_6_PERSONS_DISCOUNT); }
    else if (fishermensNumber <= 11) { price *= (1 - BETWEEN_7_11_PERSONS_DISCOUNT); }
    else if (fishermensNumber > 12) { price *= (1 - ABOVE_12_PERSONE_DISCOUNT); }
    
    if (!(fishermensNumber % 2) && !(season == "Autumn")) { price *= (1 - EVEN_NUMBER_FISHERMENS_DISCOUNT); }

    cout << fixed << setprecision(2);
    if (budget >= price) {
        cout << "Yes! You have " << budget - price << " leva left." << endl;
    }
    else {
        cout << "Not enough money! You need " << price - budget << " leva." << endl;
    }
    return 0;
}
