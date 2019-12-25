#include<stdio.h>

int main()
{
    int number[10], i, evenSq[5], oddSq[5];
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(number[i] % 2 != 0)
        {
            oddSq[i] = pow(number[i], 2);
            printf("%d ", oddSq[i]);
        }
        if(number[i] % 2 == 0)
        {
            evenSq[i] = pow(number[i], 3);
            printf("%d ", evenSq);
        }
    }
    return 0;
}
