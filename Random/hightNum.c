#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n], max;
    scanf("%d", &ar[0]);
    max = ar[0];
    for(i = 1; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] >= max)
            max = ar[i];
    }
    printf("%d\n", max);

    return 0;
}

