#include <iostream>
using namespace std;

int main()
{
    int billAmount;

    cout << "Enter bill amount: ";
    cin >> billAmount;

    cout << "Bill amount: Rs. " << billAmount << endl;

    if (billAmount >= 5000)
    {
        cout << "You qualify for a discount." << endl;
    }
    /* >= is the greater than or equal to operator and is more suitable for this condition as 500 is alos  eligeible for discount*/
    return 0;
}