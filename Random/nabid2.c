#include<stdio.h>

int main()
{
    float balance;
    char gender[10];

    printf("Enter The balance Of Deposit Holder: ");
    scanf("%f", &balance);
    printf("\nEnter The Gender Of Deposit Holder: ");
    scanf("%s", &gender);

    if((gender[0] == 'F' || gender[0] == 'f') && balance>50000)
    {
        printf("\nDeposit Holder Will Get 5 percent Bonus.\n");
    }
    else
    {
        printf("\nDeposit Holder Will Get 2 percent Bonus.\n");
    }

    return 0;
}
