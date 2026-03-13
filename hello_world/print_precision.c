#include <stdio.h>
int main()
{
    float price =19.99f;;
    printf("The price is:%f\n",price);
    printf("The price with 2 decials:%.2f\n",price);

    double x = 1;
    double y = 3;
    float resultf=x/y;
    double resultd=x/y;
        printf("The float result is:%f\n",resultf);
printf("The double result is:%f\n",resultd);

    return 0;
}