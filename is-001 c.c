#include<stdio.h>
int main()
{
    int n, i, x, y, z;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if((x > y && y > z) || (z > y && y > x))
            printf("Case %d: %d\n", i, y);
        else if((y > x && x > z) || (z > x && x > y))
            printf("Case %d: %d\n", i, x);
        else if((x > z && z > y) || (y > z && z > x))
            printf("Case %d: %d\n", i, z);
    }
    return 0;
}
