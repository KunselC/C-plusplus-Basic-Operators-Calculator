#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    //Defining variables
    double firstNumber;
    double secondNumber;
    char oper;

    cout << "Enter the first number: " << endl;
    cin >> firstNumber;
    cout << "Enter the second number: " << endl;
    cin >> secondNumber;
    cout << "Enter the operation (please enter one of +, -, *, /, %): " << endl;
    cin >> oper;

    if (oper == '+' ) {
        cout << firstNumber + secondNumber << endl;
    }
    else if (oper == '-') {
        cout << firstNumber - secondNumber << endl;
    }
    else if (oper == '*') {
        cout << firstNumber * secondNumber << endl;
    }
    else if (oper == '/') {
        if (secondNumber == 0) {
            cout << "Error: Division by zero" << endl;
        }
        else {
            cout << firstNumber / secondNumber << endl;
        }
    }
    else if (oper == '%') {
        cout << fmod(firstNumber, secondNumber);
    }
    else {
        cout << "This program requires one of the given operators." << endl;
    }

    return 0;
}