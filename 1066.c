#include<stdio.h>
int main()

{
    int i, a, e = 0, o = 0, p = 0, n = 0;
    for(i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        if(a % 2 == 0)
        {
            e = e + 1;
        }
        if(a % 2 != 0)
        {
            o = o + 1;
        }
        if(a > 0)
        {
            p = p + 1;
        }
        if(a < 0)
        {
            n = n + 1;
        }

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", e, o, p, n);

    return 0;
}
