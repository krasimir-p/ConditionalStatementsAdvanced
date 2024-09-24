#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    bool on = false;
    if (x1 == x && (y1 <= y && y <= y2)) {
        on = true;
    }
    if (x2 == x && (y1 <= y && y <= y2)) {
        on = true;
    }
    if (y1 == y && (x1 <= x && x <= x2)) {
        on = true;
    }
    if (y2 == y && (x1 <= x && x <= x2)) {
        on = true;
    }

    if (on) {
        cout << "Border" << endl;
    }
    else {
        cout << "Inside / Outside" << endl;
    }

    return 0;
}
