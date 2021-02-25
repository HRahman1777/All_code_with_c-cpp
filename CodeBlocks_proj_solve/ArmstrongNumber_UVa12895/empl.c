#include<stdio.h>
int main()
{
    int n, i, j, k, a[1000], ar[1000], count,test,m;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        test=0;
        count=0;
        scanf("%d",&a[0]);
        for(j=0; j<=1000; j++)
        {
            if(a[j]%10==0)
                break;
            ar[j]=a[j]%10;
            count++;
            a[j+1]=a[j]/10;
        }
        for(k=0; k<count; k++)
        {
            test+=pow(ar[k],count);
            if(ar[k]==5 && count!=5)
            {
                m=pow(ar[k],count)+1;
                test++;
            }
            else
                m=pow(ar[k],count);
        }
        if(test==a[0])
            printf("Armstrong\n",test);
        else if(test!=a[0])
            printf("Not Armstrong\n",test);
    }
    return 0;
}
