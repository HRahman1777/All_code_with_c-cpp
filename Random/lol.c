#include<stdio.h>
int main()
{
    int numbers[10], i,j;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(numbers[i] < 0)
        {
            numbers[i] = 1;
        }

        printf("Numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
