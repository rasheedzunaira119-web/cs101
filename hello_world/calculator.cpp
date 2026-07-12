#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero\n" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2, result;
    int choice;

    cout << "4. Divide\n";
    cout << "Welcome to Calculator\n";
    cout << "Select Operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";

    cout << "Enter choice 1/2/3/4: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;


    if (choice == 1) {
        result = add(num1, num2);
        cout << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (choice == 2) {
        result = subtract(num1, num2);
        cout << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (choice == 3) {
        result = multiply(num1, num2);
        cout << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (choice == 4) {
        if(num2 != 0) {
            result = divide(num1, num2);
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
    }
    else {
        cout << "Invalid choice\n";
    }

    return 0;
}