#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string town;
    double quantity;
    cin >> town >> quantity;
    double commission = 0;

    if (quantity>10000){
        if (town == "Sofia") { commission = 0.12; }
        else if (town == "Varna") { commission = 0.13; }
        else if (town == "Plovdiv") { commission = 0.145; }
    }
    else if (quantity > 1000) {
        if (town == "Sofia") { commission = 0.08; }
        else if (town == "Varna") { commission = 0.1; }
        else if (town == "Plovdiv") { commission = 0.12; }

    }
    else if (quantity > 500) {
        if (town == "Sofia") { commission = 0.07; }
        else if (town == "Varna") { commission = 0.075; }
        else if (town == "Plovdiv") { commission = 0.08; }

    }
    else if (quantity >= 0) {
        if (town == "Sofia") { commission = 0.05; }
        else if (town == "Varna") { commission = 0.045; }
        else if (town == "Plovdiv") { commission = 0.055; }

    }

    if (commission == 0) {
        cout << "error" << endl;
    }
    else {
        cout << fixed << setprecision(2) << commission * quantity << endl;
    }
    return 0;
}
