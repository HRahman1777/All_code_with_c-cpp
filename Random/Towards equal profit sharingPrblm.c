#include<stdio.h>

int main()
{
    int tc, i, sum=0;
    scanf("%d", &tc);
    int arr[tc];
    for(i=0; i<tc; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    if(sum%2 == 0)
    {
        printf("0\n");
    }
    else
        printf("1\n");


    return 0;
}
