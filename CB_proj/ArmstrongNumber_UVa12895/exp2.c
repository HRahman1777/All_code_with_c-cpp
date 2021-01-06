#include <stdio.h>

int main()
{
    int number, Case, i, j, rem, count = 0, digit, result = 0;
    scanf("%d", &Case);
    for(j = 1; j <= Case; j++)
    {

        scanf("%d", &number);
        for(i = number; i != 0; i = i / 10)
        {
            count++;
        }
        digit = count;
        for(i = number; i != 0; i = i / 10)
        {
            rem = i % 10;
            number = number - pow(rem, digit);
        }
        if(number == 0)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }

    return 0;
}

