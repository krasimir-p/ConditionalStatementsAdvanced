#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n1, n2;
    char operation;
    cin >> n1 >> n2 >> operation;
    
   /*
    if (operation == '+') {
        int result = n1 + n2;
        cout << n1<<" "<<operation<<" "<<n2<<" = "<< result << " - " << (result % 2 ? "odd" : "even") << endl;
    }
    else if (operation == '-') {
        int result = n1 - n2;
        cout << n1 << " " << operation << " " << n2 << " = " << result << " - " << (result % 2 ? "odd" : "even") << endl;
    }
    else if (operation == '*') {
        int result = n1 * n2;
        cout << n1 << " " << operation << " " << n2 << " = " << result << " - " << (result % 2 ? "odd" : "even") << endl;
    }
    else if (operation=='/') {
        if (n2 == 0) {
            cout << "Cannot divide " << n1 << " by zero" << endl;
        }
        else {
            cout << n1 << " " << operation << " " << n2 << " = " << fixed << setprecision(2) << static_cast<double>(n1) / n2 << endl;
        }
    }
    else if (operation == '%') {
        if (n2 == 0) {
            cout << "Cannot divide " << n1 << " by zero" << endl;
        }
        else {
            cout << n1 << " " << operation << " " << n2 << " = " << n1 % n2 << endl;
        }
    }
    */

    int result = 0;

    switch (operation)
    {
    case '+':
        result = n1 + n2;
        cout << n1 << " " << operation << " " << n2 << " = " << result << " - " << (result % 2 ? "odd" : "even") << endl;
        break;
    case '-':
        result = n1 - n2;
        cout << n1 << " " << operation << " " << n2 << " = " << result << " - " << (result % 2 ? "odd" : "even") << endl;
        break;
    case '*':
        result = n1 * n2;
        cout << n1 << " " << operation << " " << n2 << " = " << result << " - " << (result % 2 ? "odd" : "even") << endl;
        break;
    case '/':
        if (n2 == 0) {
            cout << "Cannot divide " << n1 << " by zero" << endl;
        }
        else {
            cout << n1 << " " << operation << " " << n2 << " = " << fixed << setprecision(2) << static_cast<double>(n1) / n2 << endl;
        }
        break;
    case '%':
        if (n2 == 0) {
            cout << "Cannot divide " << n1 << " by zero" << endl;
        }
        else {
            cout << n1 << " " << operation << " " << n2 << " = " << n1 % n2 << endl;
        }
        break;
    }
    return 0;
}
