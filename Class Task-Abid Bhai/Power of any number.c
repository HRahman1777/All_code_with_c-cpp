#include<stdio.h>
int main()
{
    int number, power, result;
    printf("Any Number = ");
    scanf("%d", &number);
    printf("Power of the number = ");
    scanf("%d", &power);
    result = pow(number, power);
    printf("%d^%d = %d\n", number, power, result);

    return 0;
}
