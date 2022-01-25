#include<stdio.h>
int main()
{
    int a, b, c, s;
    scanf("%d", &s);
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", s-(a+b+c));
    return 0;
}
