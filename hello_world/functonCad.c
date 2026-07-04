#include <stdio.h>

int add(int x, int y) {  
    int z = x + y;
    return z;
}

int main() {
    int result = add(19, 11);
    
    printf("19 + 11 = %d\n", result); 
    
    return 0;
}