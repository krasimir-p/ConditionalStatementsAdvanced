#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double number;
    cin >> number;
    cout << fixed << setprecision(2);
    while (number >= 0) {
        cout << "Result: " << number * 2 << endl;
        cin >> number;
    }
    cout << "Negative number!";

    return 0;
}
