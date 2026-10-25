#include <iostream>
using namespace std;

int main()
{
    int temperature;

    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    if (temperature < 10)
    {
        cout << "Weather is Cold" << endl;
    }
    else if (temperature < 25)
    {
        cout << "Weather is Pleasant" << endl;
    }
    else if (temperature < 35)
    {
        cout << "Weather is Warm" << endl;
    }
    else
    {
        cout << "Weather is Hot" << endl;
    }

    return 0;
}