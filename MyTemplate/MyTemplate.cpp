#include <iostream>

using namespace std;

int main()
{
    string dayOFweek;
    cin >> dayOFweek;

	if(dayOFweek=="Monday"||dayOFweek=="Tuesday"||dayOFweek=="Wednesday"||dayOFweek=="Thursday"||dayOFweek=="Friday"){
		cout << "Working day" << endl;
	}
	else if (dayOFweek == "Saturday" || dayOFweek == "Sunday") {
		cout << "Weekend" << endl;
	}
	else {
		cout << "Error" << endl;
	}
	
    return 0;
}
