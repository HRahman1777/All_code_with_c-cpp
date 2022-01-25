#include<stdio.h>
#include<math.h>
int main()
{
    float Benefits,Costs,NetBenefits;
    printf("\nEnter Benefits:  ");
    scanf("%f",&Benefits);
    printf("\nEnter Total Costs: ");
    scanf("%f",&Costs);
    NetBenefits = Benefits-Costs;
    printf("\n Net Benefits = %f",NetBenefits);

    return 0;
}
