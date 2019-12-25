#include<stdio.h>
int main()
{
    int ca, i, j, n;
    scanf("%d", &ca);
    if(ca >= 1 && ca <= 10)
    {
        for(i = 0; i < ca; i++)
        {
            scanf("%d", &n);
            if(n >= 2 && n <= 20)
            {
                double pot[n];
                for(j = 0; j < n; j++)
                {
                    scanf("%lf", &pot[j]);
                }
                int ct = 0, ct2 = 0;
                for(j = 0; j < n-1; j++)
                {
                    if(pot[j] < pot[j+1])
                        ct++;
                    else if(pot[j] > pot[j+1])
                        ct2++;
                }
                if(ct == (n-1))
                    printf("Yes Ascending\n");
                else if(ct2 == (n-1))
                    printf("Yes Descending\n");
                else
                    printf("No\n");
            }
        }
    }

    return 0;
}
