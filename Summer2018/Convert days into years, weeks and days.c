#include<stdio.h>
int main()
{
    int days, years, weeks, days2;
    printf("Total Days = ");

    scanf("%d", &days);

    years = days / 365;
    weeks = (days - (years * 365) ) / 7;
    days2 = ( (days - (years * 365) ) ) - (weeks * 7);

    printf("Years = %d\nWeeks = %d\nDays = %d\n", years, weeks, days2);

    return 0;
}
