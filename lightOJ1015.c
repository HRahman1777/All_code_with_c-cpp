#include<stdio.h>
int main()
{
    int tc, num, i, j;
    scanf("%d", &tc);
    for(i=0; i<tc; i++)
    {
        int sum = 0;
        scanf("%d", &num);
        int arr[num];
        for(j=0; j<num; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j] >= 0)
                sum = sum + arr[j];
        }
        printf("Case %d: %d\n", i+1, sum);
    }

    return 0;
}
