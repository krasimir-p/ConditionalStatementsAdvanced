#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double CROSS_COUNTRY_DISCOUNT = 0.25;
    const double EXPENSES = 0.05;

    int juniors, seniors;
    string trace;
    cin >> juniors >> seniors >> trace;

    double gains = 0;
    if (trace == "trail") {
        gains = juniors * 5.5 + seniors * 7;
    }
    else if (trace == "cross-country") {
        gains = juniors * 8 + seniors * 9.50;
        if(juniors+seniors>=50){
            gains *= (1 - CROSS_COUNTRY_DISCOUNT);
        }
    }
    else if (trace == "downhill") {
        gains = juniors * 12.25 + seniors * 13.75;
    }
    else if (trace == "road") {
        gains = juniors * 20 + seniors * 21.5;
    }

    cout << fixed << setprecision(2) << gains * (1 - EXPENSES) << endl;

    return 0;
}
