#include<stdio.h>
int main()
{
    int n=5, i, j, s=1;
    for(i=s; i<=n; i++)
    {
        for(j=s; j<=i; j++)
        {
            if(i>2 && i<n)
            {
                if(j==1 || j==i)
                {
                    printf("%d", j);
                }
                else
                    printf(" ");

            }
            else
                printf("%d", j);

        }
        printf("\n");
    }

    return 0;
}
