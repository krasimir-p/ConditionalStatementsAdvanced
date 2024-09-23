#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const double ROOM_FOR_ONE_PERSONE_PRICE = 18.0;
    const double APARTMENT_PRICE = 25.0;
    const double PRESIDENT_APARTMENT_PRICE = 35;
    const double TIP_POSITIVE_FEEDBACK = 0.25;
    const double DISCOUNT_NEGATIV_FEEDBACK = 0.1;
    
    int days;
    cin >> days;
    string accommodationType;
    cin.ignore();
    getline(cin,accommodationType);
    string feedback;
    cin >> feedback;

    double price = 0;
    int nights = days-1;
    if (accommodationType == "room for one person") { 
        price = ROOM_FOR_ONE_PERSONE_PRICE; 
    }
    else if (accommodationType == "apartment") {
        if (nights < 10) {
            price = APARTMENT_PRICE * 0.7; 
        }
        else if (nights < 15) {
            price = APARTMENT_PRICE * 0.65; 
        }
        else {
            price = APARTMENT_PRICE * 0.5; 
        }
    }
    else if (accommodationType == "president apartment") {
        if (nights < 10) {
            price = PRESIDENT_APARTMENT_PRICE * 0.9; 
        }
        else if (nights < 15) {
            price = PRESIDENT_APARTMENT_PRICE * 0.85; 
        }
        else {
            price = PRESIDENT_APARTMENT_PRICE * 0.8; 
        }
    }

    if (feedback == "positive") {
        price *= (1 + TIP_POSITIVE_FEEDBACK); 
    }
    else {
        price *= (1 - DISCOUNT_NEGATIV_FEEDBACK); 
    }

    double totalPrice = nights * price;

    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
