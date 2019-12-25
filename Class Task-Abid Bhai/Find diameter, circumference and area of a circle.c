#include<stdio.h>
#define PI 3.1416

int main()
{
    float radius, Dia, Cir, Area;
    printf("Radius of the circle = ");
    scanf("%f", &radius);

    Dia = 2 * radius;
    Cir = 2 * PI * radius;
    Area = PI * pow(radius, 2);
    printf("Diameter = %.2f\nCircumference = %.2f\nArea = %.2f\n", Dia, Cir, Area);

    return 0;
}
