#include<stdio.h>
int main()
{
    int n, i, j, x, y, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x == y)
        {
            sum = 0;
            printf("%d\n", sum);
        }
        else if(y > x)
        {
            for(j = x + 1, sum = 0; j < y; j++)
                if(j % 2 != 0)
            {
                sum = sum + j;
            }
            printf("%d\n", sum);

        }
        else if(x > y)
        {
            for(j = y + 1, sum = 0; j < x; j++)
                if(j % 2 != 0)
            {
                sum = sum + j;
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
