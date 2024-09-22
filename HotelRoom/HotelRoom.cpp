#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string month;
    cin >> month;
    int nights;
    cin >> nights;

    double apartmentPrice = 0;
    double studioPrice = 0;
    if (month == "May" || month == "October") {
        studioPrice = 50;
        apartmentPrice = 65;
        if (nights>14) {
            studioPrice *= 0.7;
            apartmentPrice *= 0.9;
        }
        else if (nights > 7) {
            studioPrice *= 0.95;
        }
    }
    else if (month == "June" || month == "September") {
        studioPrice = 75.2;
        apartmentPrice = 68.7;
        if (nights > 14) {
            studioPrice *= 0.8;
            apartmentPrice *= 0.9;
        }
    }
    else if (month == "July" || month == "August") {
        studioPrice = 76;
        apartmentPrice = 77;
        if (nights > 14) {
            apartmentPrice *= 0.9;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Apartment: " << apartmentPrice * nights << " lv." << endl;
    cout << "Studio: " << studioPrice * nights << " lv." << endl;

    return 0;
}
