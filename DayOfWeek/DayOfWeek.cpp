#include <iostream>

using namespace std;

int main()
{
    int dayNumber;
    cin >> dayNumber;

	string day;
	switch (dayNumber)
	{
	case 1:
		day = "Monday";
		break;
	case 2:
		day = "Tuesday";
		break;
	case 3:
		day = "Wednesday";
		break;
	case 4:
		day = "Thursday";
		break;
	case 5:
		day = "Friday";
		break;
	case 6:
		day = "Saturday";
		break;
	case 7:
		day = "Sunday";
		break;
	default:
		day = "Error";
		break;
	}

	cout << day << endl;

    return 0;
}
