#include <stdio.h>  

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, result;
    
    scanf("%d", &a);                  
    
    scanf("%d", &b);
    
    result = add(a, b);
    
    printf("%d\n", result);
    
    return 0;
}