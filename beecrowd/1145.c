#include<stdio.h>
int main()
{
    int i, n, m;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= m; i++)
    {
        if(i % n == 0)
        {
            printf("%d\n", i);
        }
        else
            printf("%d ", i);
    }
    return 0;
}
