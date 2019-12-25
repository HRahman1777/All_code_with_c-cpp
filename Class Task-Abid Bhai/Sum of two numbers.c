#include<stdio.h>
int main()
{
    int Number1, Number2, sum;
    printf("First Number is = ");
    scanf("%d", &Number1);
    printf("Second Number is = ");
    scanf("%d", &Number2);

    sum = Number1 + Number2;
    printf("Sum of two numbers = %d\n", sum);

    return 0;
}
