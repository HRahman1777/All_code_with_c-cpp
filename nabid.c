#include<stdio.h>

int main()
{
    float balance, finalBalance, fivePer, twoPer;
    char gender[10];

    printf("Enter the balance of deposit holder: ");
    scanf("%f", &balance);
    printf("Enter the gender of deposit holder: ");
    scanf("%s", &gender);

    if((gender[0] == 'F' || gender[0] == 'f') && balance>50000)
    {
        fivePer = (balance*5)/100;
        finalBalance = balance+ fivePer;
        printf("\nBonus amount: %f", fivePer);
        printf("\nTotal Balance after 31st December: %f\n", finalBalance);
    }
    else
    {
        twoPer = (balance*2)/100;
        finalBalance = balance+ twoPer;
        printf("\nBonus amount: %f", twoPer);
        printf("\nTotal Balance after 31st December: %f\n", finalBalance);
    }

    return 0;
}
