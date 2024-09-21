#include <iostream>

using namespace std;

int main()
{
    string goods;
    string town;
    double quantity;
    cin >> goods >> town >> quantity;
    double price = 0;

    if(town=="Sofia"){
        if (goods == "coffee") { price = 0.5; }
        else if (goods == "water") { price = 0.8; }
        else if (goods == "beer") { price = 1.2; }
        else if (goods == "sweets") { price = 1.45; }
        else if (goods == "peanuts") { price = 1.6; }
    }
    else if(town=="Plovdiv"){
        if (goods == "coffee") { price = 0.4; }
        else if (goods == "water") { price = 0.7; }
        else if (goods == "beer") { price = 1.15; }
        else if (goods == "sweets") { price = 1.3; }
        else if (goods == "peanuts") { price = 1.5; }

    }
    else if(town=="Varna"){
        if (goods == "coffee") { price = 0.45; }
        else if (goods == "water") { price = 0.7; }
        else if (goods == "beer") { price = 1.1; }
        else if (goods == "sweets") { price = 1.35; }
        else if (goods == "peanuts") { price = 1.55; }
    }

    cout << price * quantity << endl;

    return 0;
}
