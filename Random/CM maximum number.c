#include<stdio.h>
int main()
{
    int n, x, y, z, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(x == y && y == z)
        {
            printf("Case %d: %d\n", i, x);
        }
        else if(x > y && x > z)
        {
            printf("Case %d: %d\n", i, x);
        }
        else if(y > x && y > z)
        {
            printf("Case %d: %d\n", i, y);
        }
        else if(z > x && z > y)
        {
            printf("Case %d: %d\n", i, z);
        }
    }

    return 0;
}
