#include<stdio.h>
int main()
{
    int i, num, arr[5], count;
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);
    count = 0;
    for(i = 0; i < 5; i++)
        if(arr[i] == num)
            count++;
    printf("%d\n", count);

    return 0;
}
