#include<stdio.h>
int main()
{
    int n, i, r;
    scanf("%d", &n);
    printf("%d", n);
    for(i=n/10; i>0; i=i/10)
    {
        r = i%10;
        printf("%d", r);
    }
    return 0;
}
