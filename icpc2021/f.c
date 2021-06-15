#include<stdio.h>

long long int Last_Digit(long long int num)
{
    return num % 10;
}

int main()
{
    int test_case,i;
    scanf("%d",&test_case);
    for(i=1; i<=test_case; i++)
    {
        long long int a,b,m,j;
        int res=0;
        scanf("%lld %lld %lld",&a,&b,&m);
        for(j=0; j<=m; j++)
        {
            a=Last_Digit(a);
            b=Last_Digit(b);
            if(a==1 || a==3 || a==5)
            {
                res=res+1;
            }
            else
            {
                if(a%2==0 && b%2==0 || a%3==0 && b%3==0 || a%5==0 && b%5==0)
                {

                }
                else
                {
                    if (b%a==0)
                    {

                    }
                    else
                    {
                        res=res+1;
                    }
                }
            }
            a++;
            b++;
        }
        printf("Case %d: %d\n",i,res);
    }

    return 0;
}
