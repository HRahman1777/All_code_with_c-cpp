#include<stdio.h>
int main()
{
    double x;
    int i, Y = 0;

    for(i = 0; i <= 5; i++)
    {
        scanf("%lf", &x);

        if(x > 0)
        {
            Y++;
        }
    }

    printf("%i valores positivos\n", Y);

    return 0;
}

