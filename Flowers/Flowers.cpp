#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double RISE = 0.15;
    const double DISCOUNT_MORE_THAN_20 = 0.2;
    const double WRAPPING = 2.0;

    int chrysantemums, roses, tulips;
    string seson;
    char holiday;
    cin >> chrysantemums >> roses >> tulips >> seson >> holiday;

    double totalChrysantemumsPrice, totalRosesPrice, totalTulipsPrice, totalPrice;
    if (seson == "Spring" || seson == "Summer") {
        totalChrysantemumsPrice = chrysantemums * 2.0;
        totalRosesPrice = roses * 4.1;
        totalTulipsPrice = tulips * 2.5;
    }
    else {
        totalChrysantemumsPrice = chrysantemums * 3.75;
        totalRosesPrice = roses * 4.5;
        totalTulipsPrice = tulips * 4.15;
    }
    
    totalPrice = totalChrysantemumsPrice + totalRosesPrice + totalTulipsPrice;
    if (holiday == 'Y') {
        totalPrice *= 1.15;
    }

    if (seson == "Spring" && tulips > 7) {
        totalPrice *= 0.95;
    }
   
    if (seson == "Winter" && roses>=10) {
        totalPrice *= 0.9;
    }
  
    if (chrysantemums + roses + tulips > 20) {
        totalPrice *= 0.8;
    }

    totalPrice += WRAPPING;
    
    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
