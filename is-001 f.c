#include<stdio.h>
int main()
{
    int n, i, n1, n2, e, s, sum, j;
    scanf("%d",  &n);
    for(i = 1; i <= n; i++)
    {
        sum = 0;
        scanf("%d %d", &n1, &n2);
        if(n1 > n2)
        {
            e = n1;
            s = n2;
        }
        else if(n2 > n1)
        {
            s = n1;
            e = n2;
        }
        for(j = s; j <= e; j++)
        {
            if(j % 2 != 0)
                sum = sum + j;
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
