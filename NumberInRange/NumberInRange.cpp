#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    if (-100 <= number && number <= 100 && number != 0) { cout << "Yes" << endl; }
    else { cout << "No" << endl; }
    return 0;
}
