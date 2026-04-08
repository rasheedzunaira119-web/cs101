#include <stdio.h>
#include <stdbool.h>
int main()
{
    int value = 5;
    int x = 10;
if( x > value)
    {    
        printf("%d > %d \n", x , value);
    }
if( x == value)
    {    
        printf("%d == %d\n", x , value);
    }
if( x  < value)
    {    
        printf("%d < %d \n", x , value);
    }
    return 0;
}