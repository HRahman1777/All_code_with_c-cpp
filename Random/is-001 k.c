#include<stdio.h>
int main()
{
    int n, i, n1, n2;
    scanf("%d",  &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &n1, &n2);
        printf("Case %d: %d\n", i, n1+n2);
    }
    return 0;
}

