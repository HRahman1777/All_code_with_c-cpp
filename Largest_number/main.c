/*Find The Largest Number Between Three Numbers*/

#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Please Enter Three Numbers With DIFFERENT Values: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if(number1 == number2 && number2 == number3)
    {
        printf("Numbers Are Equal!Please, Input Three Different Values!\n");
    }

    else if(number1 > number2 && number1 > number3)
    {
        printf("%d Is The Largest Number.\n", number1);
    }

    else if(number2 > number1 && number2 > number3)
    {
        printf("%d Is The Largest Number. \n", number2);
    }

    else
    {
        printf("%d Is The Largest Number. \n",  number3);
    }

    return 0;
}
