#include <stdio.h>
int Summation(int Number1, int Number2)
{
    int Sum;
    Sum = Number1 + Number2;
    return Sum;
}
int Subtraction(int Number1, int Number2)
{
    int Sub;
    Sub = Number1 - Number2;
    return Sub;
}
int Multiplication(int Number1, int Number2)
{
   int Mult;
   Mult = Number1 * Number2;
   return Mult;
}
double Division(int Number1, int Number2)
{
    double Divi;
    Divi = Number1 / Number2;
    return Divi;
}
int Remainder(int Number1, int Number2)
{
    int Rem;
    Rem = Number1 % Number2;
    return Rem;
}
int main()
{
    int options, num1, num2, summ, subb, multt, remm;
    double divii;
    printf("\t\t\tSIMPLE CALCULATOR\n");
    printf("\t\tEnter 1 for Summation\n");
    printf("\t\tEnter 2 for Subtraction\n");
    printf("\t\tEnter 3 for Multiplication\n");
    printf("\t\tEnter 4 for Division\n");
    printf("\t\tEnter 5 for Reminder\n");
    printf("\t\tEnter 0 for Close\n");
    printf("\n\t\tPlease Choose The Number:");
    scanf("%d", &options);
    if(options == 1)
    {
        printf("Enter Two Numbers For Summation: ");
        scanf("%d %d", &num1, &num2);
        summ = Summation(num1, num2);
        printf("Summation: %d\n", summ);
    }
    else if(options == 2)
    {
        printf("Enter Two Numbers For Subtraction: ");
        scanf("%d %d", &num1, &num2);
        subb = Subtraction(num1 , num2);
        printf("Subtraction: %d\n", subb);
    }
    else if(options == 3)
    {
        printf("Enter Two Numbers For Multiplication: ");
        scanf("%d %d", &num1, &num2);
        multt = Multiplication(num1, num2);
        printf("Multiplication: %d\n", multt);
    }
    else if(options == 4)
    {
        printf("Enter Two Numbers For Division: ");
        scanf("%d %d", &num1, &num2);
        divii = Division(num1, num2);
        printf("Division: %lf\n", divii);
    }
    else if(options == 5)
    {
        printf("Enter Two Numbers For Reminder: ");
        scanf("%d %d", &num1, &num2);
        remm = Remainder(num1, num2);
        printf("Reminder: %d\n", remm);
    }
    else if(options == 0)
    {
        printf("Closed\n");
        return;
    }
    return 0;
}
