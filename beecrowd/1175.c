#include<stdio.h>
int main()
{
    int i, j, arr[20], r[20];
    for(i = 0; i <= 19; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(j = 0, i = 19; j <= 19, i >= 0; j++, i--)
    {
        r[j] = arr[i];
        printf("N[%d] = %d\n", j, r[j]);
    }
    return 0;

}
