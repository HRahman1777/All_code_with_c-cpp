#include<stdio.h>
int summation(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = summation(a,b);
    printf("%d\n", c);
    return 0;
}
