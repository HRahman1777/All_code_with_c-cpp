#include<stdio.h>
int main()
{
    long long int ct, i, sum=0, max, min;
    scanf("%lld", &ct);
    long long int arr[ct];
    for(i=0; i<ct; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum+arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<ct; i++)
    {
        if(arr[i]>=max)
            max = arr[i];
        else if(arr[i]<min)
            min = arr[i];
    }

    printf("%lld %lld %lld\n", min, max, sum);
    return 0;
}
