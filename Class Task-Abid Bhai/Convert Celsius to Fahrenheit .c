#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Temperature in Celsius is = ");
    scanf("%f", &celsius);

    fahrenheit = ( (9 * celsius) / 5 ) + 32;

    printf("Temperature in Fahrenheit  is = %.2f\n", fahrenheit);

    return 0;
}
