#include <iostream>
using namespace std;

int addNumbers(int a, int b); 

int main() {
    int num1 = 10;
    int num2 = 20;

    int sum = addNumbers(num1, num2); 

    cout << "The sum is: " << sum << endl;
    return 0;
}

// 2. Function Definition
int addNumbers(int a, int b) {
    int result = a + b;
    return result; 
}