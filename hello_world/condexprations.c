#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool condition = true ;
    bool condition2 = false ;

    printf("The condion is true:%d\n",condition);
printf("The condion is false:%d\n",condition2);

int value = 5;
 int x = 2;
int y = 5;
int z = 7;

bool compare1 = x> value;
bool compare2 = y == value;
bool compare3 = z< value;
printf("The bool compare 1 is:%d\n",compare1);
printf("The bool compare 2 is:%d\n",compare2);
printf("The bool compare 3 is:%d\n",compare3);
 
    return 0;
}