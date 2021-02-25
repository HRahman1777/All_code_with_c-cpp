#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Base of the triangle = ");
    scanf("%f", &base);
    printf("Height of the triangle = ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
