#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n";

    switch (op) {
        case '+':
            cout << "Result: " << (num1 + num2) << "\n";
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << "\n";
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << "\n";
            break;
        case '/':
            // Guard against division by zero
            if (num2 != 0.0) {
                cout << "Result: " << (num1 / num2) << "\n";
            } else {
                cout << "Error: Cannot divide by zero.\n";
            }
            break;
        default:
            cout << "Error: Invalid operator entered.\n";
            break;
    }

    return 0;
}