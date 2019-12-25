#include<stdio.h>
int main()
{
    int x, y, s, e, i, sum = 0;
    scanf("%d %d", &x, &y);
    if(x > y)
    {
        e = x;
        s = y;
    }
    else if(y > x)
    {
        s = x;
        e = y;
    }
    for(i = s; i <= e; i++)
    {
        if(i % 13 != 0)
            sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
