#include <iostream>
using namespace std;

// simple calculator class
class Calculator {
public:
    double a;
    double b;

    // constructor to store numbers
    Calculator(double x, double y) {
        a = x;
        b = y;
    }

    // function which does operation based on the symbol
    double calc(char op) {
        double ans = 0;
        if (op == '+') {
            ans = a + b;
        } else if (op == '-') {
            ans = a - b;
        } else if (op == '*') {
            ans = a * b;
        } else if (op == '/') {
            // small check so that b is not zero
            if (b != 0)
                ans = a / b;
            else {
                cout << "Cannot divide by zero
";
            }
        } else {
            cout << "Unknown operation
";
        }
        return ans;
    }
};

int main() {
    double x, y;
    char op;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    Calculator c(x, y);              // object of class
    double result = c.calc(op);      // call function

    cout << "Result = " << result << endl;
    return 0;
}
