#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    bool validNumber = (100 <= number && number <= 200) || number == 0;
    if (!validNumber) { cout << "invalid"; }

    return 0;
}
