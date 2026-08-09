#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool cnic = true;

    if (age >= 18 && cnic == true) {
        cout << "Vote de sakte ho";
    }else {
        cout << "Vote nahi de sakte";
    }
    return 0;
}