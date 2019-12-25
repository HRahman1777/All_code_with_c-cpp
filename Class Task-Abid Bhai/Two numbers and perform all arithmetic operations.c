#include<stdio.h>
int main()
{
    int number1, number2, Add, Sub, Multi,Div, Rem;
    printf("First Number is = ");
    scanf("%d", &number1);
    printf("Second Number is = ");
    scanf("%d", &number2);
    Add = number1 + number2;
    Sub = number1 - number2;
    Multi = number1 * number2;
    Div = number1 / number2;
    Rem = number1 % number2;
    printf("Addition = %d\nSubtraction = %d\nMultiplication = %d\nDivision = %d\nRemainder = %d\n", Add, Sub, Multi, Div, Rem);

    return 0;
}
