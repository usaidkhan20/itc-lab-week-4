#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
        cout << "First number is greater" << endl;
    else
        cout << "First number is not greater" << endl;
//Since the numbers are equal, the first is not greater, so the else message is correct. This is why the message will say “not greater”
    return 0;
}