#include<stdio.h>

int main()
{
    int value, i, c;
    scanf("%d", &value);
    scanf("%d", &c);
    int coins[c], ans[c];
    for(i=0; i<c; i++)
    {
        scanf("%d", &coins[i]);
    }
    int  count = 0;
    int size = sizeof(coins)/sizeof(coins[0]);
    for(i = size-1; i >= 0; i--)
    {
        while(value >= coins[i])
        {
            value -= coins[i];
            ans[count] = coins[i];
            count++;
        }
        if(value == 0)
            break;

    }
    for(i = 0; i < count; i++)
        printf("%d ", ans[i]);

    return 0;
}
