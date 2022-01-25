#include<stdio.h>
int main()
{
    float n, g, f;
    scanf("%f", &n);
    if(n >= 0 && n <= 2000)
    {
        printf("Isento\n");
    }
    else if(n >= 2000.01 && n <= 3000.00)
    {
        g = n - 2000;
        f = g * 0.08;
        printf("R$ %.2f\n", f);
    }
    else if(n >= 3000.01 && n <= 4500.00)
    {
        g = n - 3000;
        f = g * 0.18;
        printf("R$ %.2f\n", f + 80);
    }
    else if(n >= 4500.01)
    {
        g = n - 4500;
        f = g * 0.28;
        printf("R$ %.2f\n", f + 350);
    }
    return 0;
}
