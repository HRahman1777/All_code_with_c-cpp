#include<stdio.h>
int main()
{
    int arr[10], n, i;
    scanf("%d", &n);
    for(i = 0; i <= 9; i++)
    {
        arr[i] = n;
        printf("N[%d] = %d\n", i, arr[i]);
        n = n * 2;
    }
    return 0;
}
