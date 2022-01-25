#include<stdio.h>
int main()
{
    int i, numbers[10], sum = 0;

    printf("Enter numbers: ");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(numbers[i] % 2 == 1)
        {
            sum += numbers[i];
        }
    }
    printf("\nSum of only odd numbers what you assign in = %d\n", sum);
    return 0;
}
