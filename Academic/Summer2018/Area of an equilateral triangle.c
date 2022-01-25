#include<stdio.h>

int main()
{
    float side, area;
    printf("Equal-side of the equilateral triangle = ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * ( pow(side, 2) );
    printf("Area of the equilateral triangle = %.2f\n", area);

    return 0;
}
