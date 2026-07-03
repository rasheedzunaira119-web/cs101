#include <iostream>
using namespace std;


int add(int x, int y) {
    int z = x + y;  
    return z;      
}

int main() {

    int result = add(5, 6); 
    

    cout << "5 + 6 = " << result << endl; 
    
    return 0;
}