#include<stdio.h>
int main()
{
    int x, y, r;
    while(scanf("%d %d", &x, &y) == 2)
    {
        r = x * y;
        printf("%d\n", r - 1);

    }

    return 0;
}
