#include<stdio.h>

int main()
{
    int Friends, Burger, Candy, Coke, TotalAmount, FinalAmount;

    scanf("%d %d %d %d", &Friends, &Burger, &Candy, &Coke);

    TotalAmount = Friends * (Burger+Candy+Coke);
    if(TotalAmount < 5000)
    {
        FinalAmount = TotalAmount;
    }
    else if(TotalAmount >= 5000 && TotalAmount < 10000)
    {
        FinalAmount = TotalAmount - ((TotalAmount*5) / 100);
    }
    else if(TotalAmount >= 10000)
    {
        FinalAmount = TotalAmount - ((TotalAmount*10) / 100);
    }
    printf("BDT %d\n", FinalAmount);

    return 0;
}
//Input:40 120 15 25
//Output:BDT 6080
