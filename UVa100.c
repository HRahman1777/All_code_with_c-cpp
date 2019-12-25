#include<stdio.h>
int main()
{
    int num1, num2,i, j, sum, temp, count;
    while(scanf("%d %d", &num1, &num2) == 2)
    {
        sum = 0;
        printf("%d %d ", num1, num2);
        if(num1 > num2)
        {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        for(i = num1; i <= num2; i++)
        {
            count = 1;
            j = i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                count++;
            }
            if(count >= sum)
                sum = count;
        }

        printf("%d\n", sum);
    }
    return 0;
}
