#include <iostream>

using namespace std;

int main()
{
    
    double age;
    char gender;
    string title;
    cin >> age >> gender;
    
    if(gender=='m'){
        if (age >= 16) { title = "Mr."; }
        else if (age<16) { title = "Master"; }
    }
    else{
        if (age >= 16) { title = "Ms."; }
        else if (age<16) { title = "Miss"; }
    }

    cout << title;

    return 0;
}
