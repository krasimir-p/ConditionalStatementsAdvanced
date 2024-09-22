#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double PREMIERA_PRICE = 12.00;
    const double NORMAL_PRICE = 7.50;
    const double DISCOUNT_PRICE = 5.0;

    string type;
    cin >> type;
    int r, c;
    cin >> r >> c;
    
    double price=0;
    if (type == "Premiere") {
        price = r * c * PREMIERA_PRICE;
    }
    else if (type == "Normal") {
        price = r * c * NORMAL_PRICE;
    }
    else if (type == "Discount") {
        price = r * c * DISCOUNT_PRICE;
    }

    cout << fixed << setprecision(2) << price << " leva." << endl;

    //system("pause");

    return 0;
}
