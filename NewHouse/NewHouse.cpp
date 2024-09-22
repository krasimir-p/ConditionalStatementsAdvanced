#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double ROUSES_PRICE = 5.0;
    const double DAHLIAS_PRICE = 3.8;
    const double TULIPS_PRICE = 2.8;
    const double NARCISSUS_PRICE = 3.0;
    const double GLADIOLUS_PRICE = 2.5;

    string typeFlowers;
    cin >> typeFlowers;
    int quantityFlowers, budget;
    cin >> quantityFlowers >> budget;

    double price = 0;

    if (typeFlowers == "Roses") {
        quantityFlowers > 80 ? price = 0.9 * ROUSES_PRICE : price = ROUSES_PRICE;
    }
    else if (typeFlowers == "Dahlias") {
        quantityFlowers > 90 ? price = 0.85 * DAHLIAS_PRICE : price = DAHLIAS_PRICE;
    }
    else if (typeFlowers == "Tulips") {
        quantityFlowers > 80 ? price = 0.85 * TULIPS_PRICE : price = TULIPS_PRICE;
    }
    else if (typeFlowers=="Narcissus") {
        quantityFlowers < 120 ? price = 1.15 * NARCISSUS_PRICE : price = NARCISSUS_PRICE;
    }
    else if (typeFlowers == "Gladiolus") {
        quantityFlowers < 80 ? price = 1.2 * GLADIOLUS_PRICE : price = GLADIOLUS_PRICE;
    }
    double totalPrice = price * quantityFlowers;
    cout << fixed << setprecision(2);
    if (budget >= totalPrice) {
        cout 
            << "Hey, you have a great garden with " 
            << quantityFlowers 
            << " " 
            << typeFlowers 
            << " and " 
            << budget - totalPrice 
            << " leva left." 
         << endl;
    }
    else {
        cout << "Not enough money, you need " << totalPrice-budget << " leva more." << endl;
    }

    return 0;
}
