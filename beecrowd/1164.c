#include<stdio.h>

int main()
{
    int cs, num, i, j, m, ct, f;
    scanf("%d", &cs);
    for(i = 1; i <= cs; i++)
    {
        scanf("%d", &num);
        m = num / 2;
        ct = 0;
        f = 0;
        for(j = 1; j <= m; j++)
        {
            if(num % j == 0)
                f = f + j;
        }
        if(f == num)
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);
    }
    return 0;
}
