#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>3 && arr[i]<10)
            arr[i]=1;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
