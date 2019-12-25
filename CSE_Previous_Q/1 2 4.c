#include<stdio.h>
int main()
{
    int a[10], i;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 1)
        {
            printf("%d  ", a[i]*a[i]);
        }
    }

    for( i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d  ", a[i] * a[i] * a[i]);
        }
    }

    return 0;

}

//Input:3 4 2 7 8 6 2 5 9 1
//Output:9 49 25 81 1 64 8 512 216 8
