#include<stdio.h>
int main()
{
    int n1, n2, a;
    while(scanf("%d %d", &n1, &n2) == 2)
    {
        a = (n1 - 1) / (n2 - 1);
        printf("%d\n", n1 + a);
    }
    return 0;
}
