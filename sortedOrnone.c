#include<stdio.h>
int main()
{
    int num, i, cntt;
    scanf("%d", &num);
    int arr[num];

    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    cntt = 1;
    for(i=0; i<num-1; i++)
    {
        if(arr[i]<=arr[i+1])
            cntt++;
    }
    if(cntt == num)
        printf("Yes\n");
    else
        printf("No\n", cntt);

    return 0;
}
