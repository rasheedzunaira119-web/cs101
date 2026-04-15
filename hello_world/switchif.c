#include <stdio.h>
int main(){
    int temp_limit =35;
    int x ;
    x = 35 ;
    printf("Enter temperature ");
    scanf("%d", &x);

    if(x > temp_limit) {
        printf("Turn on the fan\n");
    } 
    if(x < temp_limit) {
        printf("Turn off the fan\n");
    }
    return 0;
} 