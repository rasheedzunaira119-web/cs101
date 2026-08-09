#include <iostream>
using namespace std;

int main() {
    string password = "123";
    string otp = "4567";

    if (password == "123" || otp == "4567") {
        cout << "Login ho gaya";
    }else {
        cout << "Login nahi ho paya";
    }
    return 0;
}