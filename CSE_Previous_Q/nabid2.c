#include<stdio.h>
int main()
{
    int i, numbers[5], max = 0;
    printf("Enter the numbers: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(numbers[i] > max)
            max = numbers[i];
    }
    printf("\nMax: %d", max);
    return 0;
}
