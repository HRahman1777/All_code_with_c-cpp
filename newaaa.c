#include<stdio.h>

int main()
{
    int n, k, i, sum;
    while(scanf("%d %d", &n, &k)!= EOF)
    {
        sum=n;
        while(n>=k)
        {
            n=n/k;
            sum+=n;
        }
        printf("%d\n",sum);
    }

    return 0;
}
