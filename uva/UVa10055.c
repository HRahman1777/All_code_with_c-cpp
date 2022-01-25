#include<stdio.h>
int main()
{
    long long int a, b, res;
    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(a>b)
            res = a - b;
        if(a<=b)
            res = b - a;

        printf("%lld\n", res);
    }

    return 0;
}
