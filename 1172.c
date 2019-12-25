#include<stdio.h>
int main()
{
    int arr[10], i;
    for(i = 0; i <= 9; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i <= 9; i++)
    {
        if(arr[i] <= 0)
        {
            arr[i] = 1;
        }
        printf("X[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
