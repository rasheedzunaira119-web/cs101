#include <iostream>
using namespace std;

int main() {
    bool option1 = true;
    bool option2 = false;

    if (option1 ^ option2) {  
        cout << "Sirf 1 option select karo";
    }else {
        cout << "Ya to dono select karo ya dono nahi";
    }
    return 0;
}