#include<stdio.h>
int main()
{
    int n, cs, i;
    scanf("%d", &cs);
    for(i = 0; i < cs; i++)
    {
        double phi = 1.61803, phiM = -0.618, rot = 2.236, res;
        scanf("%d", &n);
        res = pow(phi, n) - pow(phiM, n);
        printf("Fib(%d) = %0.lf\n", n, res/rot);
    }
    return 0;
}

