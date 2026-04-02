#include <stdio.h>
int main()
{

    double x = 7;
    double y = 3;
    float resultf_inch = x/y;
    double resultd_inch = x/y;
        printf("The float result inch is:%.20f\n",resultf_inch);
printf("The double result inch is:%.20f\n",resultd_inch);

float resultf_centimeters;
double resultd_centimeters;
float conversion_fector = 2.54;

resultf_centimeters = resultf_inch * conversion_fector ;
resultd_centimeters = resultd_inch * conversion_fector ;
printf("The float result centimeter is:%f\n",resultf_centimeters);
printf("The double result centimeter is: %f\n",resultd_centimeters);

    return 0;
}