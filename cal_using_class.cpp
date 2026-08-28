#include <iostream>
using namespace std;

class Calculator {
private:
    double a, b;

public:
    Calculator(double x, double y) {
        a = x;
        b = y;
    }

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    Calculator calc(num1, num2);

    switch (operation) {
        case '+':
            cout << "Result = " << calc.add() << endl;
            break;

        case '-':
            cout << "Result = " << calc.subtract() << endl;
            break;

        case '*':
            cout << "Result = " << calc.multiply() << endl;
            break;

        case '/':
            cout << "Result = " << calc.divide() << endl;
            break;
 
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
