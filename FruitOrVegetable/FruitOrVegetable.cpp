#include <iostream>

using namespace std;

int main()
{
    string type;
    string goods;
    cin >> goods;

    if(goods=="banana" || goods == "apple" || 
        goods == "kiwi" || goods == "cherry" || 
        goods == "lemon" || goods == "grapes") { type = "fruit"; }
    else if(goods== "tomato"|| goods == "cucumber" || 
        goods == "pepper" || goods == "carrot") { type = "vegetable"; }
    else { type = "unknown"; }

    cout << type << endl;

    return 0;
}
