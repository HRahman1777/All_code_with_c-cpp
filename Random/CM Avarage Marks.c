#include<stdio.h>
int main()
{
    int i, j, n, k, m, q, a = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        m = k;
        for(j = 1; j <= m; j++)
        {
            scanf("%d", &q);
            a = a + q;
        }
        printf("Case %d: %d\n", i, a/m);
        a = 0;
    }
    return 0;
}
