#include<stdio.h>
int main()
{
    int i, k, num, arr[5];
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &num);
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
            k = i;
    }
    for(i = k; i < 5-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for(i = 0; i < 5-1; i++)
        printf("%d\n", arr[i]);

    return 0;
}
