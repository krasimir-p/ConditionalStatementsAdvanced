#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string fruit, day;
    double quantity;
    cin >> fruit >> day >> quantity;
    double price = 0;

    if (fruit == "banana"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 2.5;
        }
        else if(day == "Saturday" || day == "Sunday"){
            price = 2.7;
        }
    }
    else if(fruit=="apple"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 1.2;
        }
        else if (day == "Saturday" || day == "Sunday") {
            price = 1.25;
        }
    }
    else if(fruit=="orange"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 0.85;
        }
        else if (day == "Saturday" || day == "Sunday") {
            price = 0.9;
        }
    }
    else if(fruit=="grapefruit"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 1.45;
        }
        else if (day == "Saturday" || day == "Sunday") {
            price = 1.6;
        }
    }
    else if(fruit=="kiwi"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 2.7;
        }
        else if (day == "Saturday" || day == "Sunday") {
            price = 3.0;
        }
    }
    else if(fruit=="pineapple"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 5.5;
        }
        else if (day == "Saturday" || day == "Sunday") {
            price = 5.6;
        }
    }
    else if(fruit=="grapes"){
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
            price = 3.85;
        }
        else if (day == "Saturday" || day == "Sunday") {
            price = 4.2;
        }
    }
    
    if (price == 0) { cout << "error" << endl; }
    else { cout << fixed << setprecision(2) << price * quantity << endl; }

    return 0;
}
