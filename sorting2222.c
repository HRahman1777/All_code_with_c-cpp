#include<stdio.h>

void main()
{
    int x, i, j, k, temp;
    printf("HOW many NUMBBERS: ");
    scanf("%d",&x);
    int num[x];
    printf("THE NUMBBERS: ");
    for(i=0; i<x; i++)
        scanf("%d",&num[i]);
    k=x;
    for(i=0; i<x; i++)
    {
        if(num[i]%2==0)
        {
            for(j=i+1; j<k; j++)
            {
                if(num[j]%2==0)
                {
                    if(num[i]>num[j])
                    {
                        temp=num[i];
                        num[i]=num[j];
                        num[j]=temp;
                    }
                }
            }
            k=j;
        }
    }

    for(i=0; i<x; i++)
        printf("%d ",num[i]);
}
