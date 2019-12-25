#include<stdio.h>
int main()
{
    int i, j, tc, st, sum, dt;
    scanf("%d", &tc);
    for(i = 1; i <= tc; i++)
    {
        sum = 0;
        scanf("%d", &st);
        for(j = 1; j <= st; j++)
        {
            scanf("%d", &dt);
            sum = sum + dt;
        }
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
