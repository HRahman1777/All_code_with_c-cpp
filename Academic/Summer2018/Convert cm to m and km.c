#include<stdio.h>
int main()
{
    float centimeter, meter, kilometer;
    printf("Length in Centimeter is = ");
    scanf("%f", &centimeter);

    meter = centimeter / 100;
    kilometer = centimeter / 1000;

    printf("In Meter is = %.2f\nIn Kilometer is = %.2f", meter, kilometer);

    return 0;
}
