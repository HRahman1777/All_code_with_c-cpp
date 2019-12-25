/*Find The Smallest Number Between Three Numbers */
#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Please Enter Three Numbers With DIFFERENT Values: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if(number1 > number2 && number3 > number2)
    {
        printf("%d Is The Smallest Number.\n", number2);
    }
    else if(number2 > number1 && number3 > number1)
    {
        printf("%d Is The Smallest Number.\n", number1);
    }
    else
    {
        printf("%d Is The Smallest Number.\n", number3);
    }

    return 0;
}
