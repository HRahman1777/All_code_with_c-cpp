#include<stdio.h>

int main()
{
    int n, number, i, j, digit, result;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        digit = 0;
        result = 0;
        scanf("%d", &number);
        for(j = number; j > 0; j = j / 10)
        {
            digit++;
        }
        for(j = number; j > 0; j = j / 10)
        {
            if(j % 10 == 5 && digit != 5)
            {

                result = result + pow(j%10,digit);
                result++;
            }
            else
                result = result + pow(j%10,digit);
        }

        if(result == number)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }
    return 0;
}

