#include<stdio.h>
int main()
{
    int i, num, a, b, j, tp;
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        int res = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        if(a>b)
        {
            tp = a;
            a = b;
            b = tp;
        }
        for(j = a; j<= b; j++)
            {
                if(j % 2 != 0)
                    res = res + j;
            }
        printf("Case %d: %d\n", i, res);
    }

    return 0;
}
