#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    /*

    An if-else-if chain stops at the first condition that is true, and each
    condition only checks a lower limit */
    return 0;
}
