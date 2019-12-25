#include<stdio.h>
#include<math.h>

int main()
{
    long long tc, nu, di, s;
    int i;
    scanf("%lld", &tc);
    for(i = 1; i <= tc; i++)
    {
        scanf("%lld %lld", &nu, &di);
        s = nu * di;
        printf("Case %d: %lld\n", i, s/2);
    }

    return 0;
}
