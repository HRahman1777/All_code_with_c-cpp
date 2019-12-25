#include<stdio.h>
int main()
{
    float number, root;
    printf("Any Number = ");
    scanf("%f", &number);
    root = sqrt(number);
    printf("Square root of the number = %.2f\n", root);

    return 0;
}
