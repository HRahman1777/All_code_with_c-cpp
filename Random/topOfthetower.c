#include<stdio.h>
int main()
{
    int tc, i;
    double a, b;
    scanf("%d", &tc);
    if(tc <= 10)
    {
        for(i=0; i<tc; i++)
        {
            double sum, res;
            scanf("%lf %lf", &a, &b);
            if(a<=100 && b<=100)
            {
                sum = (a*a) + (b*b);
                res = sqrt(sum);
                printf("%.2lf\n", res);
            }
        }
    }

    return 0;
}
