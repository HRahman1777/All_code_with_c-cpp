#include<stdio.h>
int main()
{
    int n, k;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        k = 0;
        while( n >= 3)
        {
            n = n - 3;
            k++;
            n = n + 1;
        }
        if(n == 2)
        {
            k++;
        }

        printf("%d\n", k);
    }
    return 0;
}
