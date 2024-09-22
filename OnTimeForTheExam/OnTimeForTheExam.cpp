#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
    int hourExam, minutesExam, hourArrivel, minutesArrivel;
    cin >> hourExam >> minutesExam >> hourArrivel >> minutesArrivel;

    int examMinutesOfDay = hourExam * 60 + minutesExam;
    int arrivelMinutesOfDay = hourArrivel * 60 + minutesArrivel;

    int deltaHours = 0;
    int deltaMinutes = examMinutesOfDay - arrivelMinutesOfDay;
    if (deltaMinutes < 0) {
        deltaMinutes *= -1;
        deltaHours = deltaMinutes / 60;
        deltaMinutes %= 60;
        cout << "Late" << endl;
        if (deltaHours) {
            cout << deltaHours << ":" << setw(2) << setfill('0') << deltaMinutes << " hours after the start" << endl;
        }
        else {
            //cout << setw(2) << setfill('0') << deltaMinutes << " minutes after the start" << endl;
            cout << deltaMinutes << " minutes after the start" << endl;
        }
    }
    else if (deltaMinutes == 0) {
        cout << "On time" << endl;
    }
    else if (deltaMinutes > 30) {
        deltaHours = deltaMinutes / 60;
        deltaMinutes %= 60;
        cout << "Early" << endl;
        if (deltaHours) {
            cout << deltaHours << ":" << setw(2) << setfill('0') << deltaMinutes << " hours before the start" << endl;
        }
        else {
            //cout << setw(2) << setfill('0') << deltaMinutes << " minutes before the start" << endl; 
            cout << deltaMinutes << " minutes before the start" << endl;
        }
    }
    else {
        cout << "On time" << endl;
        cout << deltaMinutes << " minutes before the start" << endl;
    }
    return 0;
}
