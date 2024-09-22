#include <iostream>

using namespace std;

int main()
{
    int degrees;
    cin >> degrees;
    string timeOfDay;
    cin >> timeOfDay;

    string outfit;
    string shoes;

    if (degrees <= 18) {
        if (timeOfDay == "Morning") {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (timeOfDay == "Afternoon") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (degrees <= 24) {
        if (timeOfDay == "Morning") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (timeOfDay == "Afternoon") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else {
        if (timeOfDay == "Morning") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (timeOfDay == "Afternoon") {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else {
            outfit = "Shirt";
            shoes = "Moccasins";
        }

    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}
