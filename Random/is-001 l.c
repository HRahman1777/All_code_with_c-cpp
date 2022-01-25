#include<stdio.h>
int main()
{
    int n, count, i, j, x;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        count = 0;
        for(j = x; j != 0; j = j / 2)
        {
            if(j % 2 == 1)
                count = count + 1;

        }
        if(count % 2 == 0)
            printf("Case %d: even\n", i);
        else
            printf("Case %d: odd\n", i);
    }
    return 0;
}
