#include<stdio.h>
int main()
{
    int a, b, c, x, y, z, f=0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);
    if(x == 1)
        f++;
    if(y == 1)
        f++;
    if(z == 1)
        f++;
    if(f == 0)
        printf("%d\n", f);
    if(f != 0)
        printf("%d\n", (a+b+c)/f);

    return 0;
}
