#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double TAXES = 0.1;
    const int MONTH_PER_SEASON = 4;

    string season;
    cin >> season;
    double kmPerMonth;
    cin >> kmPerMonth;

    double salary = 0;
    if(kmPerMonth<=5000){
        if (season == "Summer") {
            salary = 0.9;
        }
        else if (season == "Winter") {
            salary = 1.05;
        }
        else {
            salary = 0.75;
        }
    }
    else if (kmPerMonth<=10000) {
        if (season == "Summer") {
            salary = 1.1;
        }
        else if (season == "Winter") {
            salary = 1.25;
        }
        else {
            salary = 0.95;
        }
    }
    else {
        salary = 1.45;
    }

    salary *= kmPerMonth;
    salary *= MONTH_PER_SEASON;
    salary *= (1-TAXES);

    cout << fixed << setprecision(2) << salary << endl;

    return 0;
}
