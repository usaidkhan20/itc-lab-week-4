// Name:usaid khan
// Roll Number:L1F26BSCS0278
#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    /*
    Difference between = and ==:

    = is the assignment operator. It stores the value on its right into the
    variable on its left. For example, marks = 50 sets marks to 50.

    == is the equality (comparison) operator. It checks whether two values
    are equal and produces true or false without changing either value.
    For example, marks == 50 is true only if marks already holds 50.
    */

    return 0;
}