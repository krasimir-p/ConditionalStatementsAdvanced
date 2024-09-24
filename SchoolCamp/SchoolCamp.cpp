#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string season, groupType;
    int numberStudents, nights;
    cin >> season >> groupType >> numberStudents >> nights;

    double price = 0;
    if (season == "Winter") {
        if (groupType == "girls") {
            cout << "Gymnastics";
            price = 9.6;
        }
        else if (groupType == "boys") {
            cout << "Judo";
            price = 9.6;
        }
        else {
            cout << "Ski";
            price = 10.0;
        }
    }
    else if (season == "Spring") {
        if (groupType == "girls") {
            cout << "Athletics";
            price = 7.2;
        }
        else if (groupType == "boys") {
            cout << "Tennis";
            price = 7.2;
        }
        else {
            cout << "Cycling";
            price = 9.5;
        }
    }
    else {
        if (groupType == "girls") {
            cout << "Volleyball";
            price = 15.0;
        }
        else if (groupType == "boys") {
            cout << "Football";
            price = 15.0;
        }
        else {
            cout << "Swimming";
            price = 20.0;
        }
    }

    if (numberStudents >= 50) {
        price *= 0.5;
    }
    else if (numberStudents >= 20) {
        price *= 0.85;
    }
    else if (numberStudents >= 10) {
        price *= 0.95;
    }

    price = price*numberStudents*nights;

    cout << " " << fixed << setprecision(2) << price << " lv." << endl;

    return 0;
}
