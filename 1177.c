#include<stdio.h>
int main()
{
    int arr[1000], t, i, tm;
    scanf("%d", &t);
    tm=0;
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n", i, tm);
        tm=tm+1;

        if(tm==t)
            tm=0;
    }

    return 0;
}
