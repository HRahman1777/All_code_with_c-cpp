#include<stdio.h>
int main()
{
    int a, b, rs;

    while(scanf("%d %d", &a, &b)==2)
    {
        rs = a*b*2;
        printf("%d\n", rs);
    }
    return 0;
}
