#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Temperature in Fahrenheit is = ");
    scanf("%f", &fahrenheit);

    celsius = ( (fahrenheit - 32) * 5 ) / 9;
    printf("Temperature in Celsius is = %.2f\n", celsius);

    return 0;
}
