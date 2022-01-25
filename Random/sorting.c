#include<stdio.h>
int main()
{
    int arr[6], i, k, extra;
    for(i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }
        for(i = 0; i <= 5; i++)
        {
            if(arr[i] % 2 == 0)
            {
                for(k = i + 1; k <= 5; k++)
                {
                    if(arr[k] % 2 == 0)
                    {
                        extra = arr[i];
                        arr[i] = arr[k];
                        arr[k] = extra;
                    }
                }
            }

        }
    for(i = 0; i <= 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
