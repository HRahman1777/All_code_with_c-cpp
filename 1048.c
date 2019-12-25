#include<stdio.h>

int main()
{
    float n, e, t;
    int p;
    scanf("%f", &n);
    if(n > 0 && n <= 400.00)
    {
        p = 15;
        e = (n * p) / 100;
        t = e + n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", t, e);
    }
    else if(n >= 400.01 && n <= 800.00)
    {
        p = 12;
        e = (n * p) / 100;
        t = e + n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", t, e);
    }
    else if(n >= 800.01 && n <= 1200.00)
    {
        p = 10;
        e = (n * p) / 100;
        t = e + n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", t, e);
    }
    else if(n >= 1200.01 && n <= 2000.00)
    {
        p = 7;
        e = (n * p) / 100;
        t = e + n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", t, e);
    }
    else if(n > 2000.00)
    {
        p = 4;
        e = (n * p) / 100;
        t = e + n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", t, e);
    }

    return 0;

}
