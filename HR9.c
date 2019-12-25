#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int x, i;
    scanf("%d", &x);
    int arr[x], max = 0, cnd = 0;
    for(i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    for(i = 0; i < x; i++)
    {
        if(arr[i] == max)
            cnd++;
    }

    printf("%d\n", cnd);

    return 0;
}
