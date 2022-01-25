#include<stdio.h>

int main()
{
    int i, j, k;

    for(i = 1; i <= 2; i++)
    {
        if(i == 1)
        {
            for(k = 1; k <= 2; k++)
            {
                printf(" ");
                for(j = 1; j <= 2; j++)
                {
                    printf(" *");
                }
                printf("     ");
            }
            printf("\n");
        }
        for(j = 1; j <= 4; j++)
        {
            printf("* ");
        }
        printf("  ");
    }
    printf("\n");
    for(i = 1; i <= 9; i+=2)
    {
        for(k = 1; k < i; k+=2)
        {
            printf("  ");
        }

        for(j = 9; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
