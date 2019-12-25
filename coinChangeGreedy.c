#include <stdio.h>

int main()
{
    int num, coin;
    printf("Enter The Number To Change: ");
    scanf("%d", &num);
    printf("\nEnter Total Number Of Coins: ");
    scanf("%d", &coin);

    coinChange(num, coin);

    return 0;
}

void coinChange(int cost, int c)
{
    int i;

    printf("\nEnter Available Coins: ");
    int coins[c];
    for(i = 0; i < c; i++)
    {
        scanf("%d", &coins[i]);
    }
    int coinList[cost];
    int j, k = 0;

    for (j =  c - 1; j >= 0; j--)
    {
        while(cost >= coins[j])
        {
            cost = cost - coins[j];
            coinList[k++] = coins[j];
        }
    }
    printf("\nThe Minimal Number Of Change: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", coinList[i]);
    }
}

