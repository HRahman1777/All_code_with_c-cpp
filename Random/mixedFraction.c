#include<stdio.h>
int main()
{
    int n, d, r;
    scanf("%d %d", &n, &d);
    r = n/d;
    printf("%d %d %d\n", r, n-(r*d), d);
    return 0;
}

