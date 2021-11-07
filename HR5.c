#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int x, sum1 = 0, sum2 = 0;
    scanf("%d", &x);
    int arr[x][x], i, j;
    for(i = 0; i < x; i++)
        for(j = 0; j < x; j++)
        {
            scanf("%d", &arr[i][j]);
        }

    for(i = 0; i < x; i++)
        for(j = 0; j < x; j++)
        {
            if(i == j)
            {
                sum1 += arr[i][j];
            }
        }
    int z = x - 1;
    for(i = 0; i < x; i++)
    {
        sum2 += arr[i][z];
        z--;
    }
    printf("%d %d\n", sum1, sum2);
    if(sum1 > sum2)
    {
        printf("%d", sum1-sum2);
    }
    else if(sum2 > sum1)
    {
        printf("%d", sum2-sum1);
    }
    else
        printf("%d", sum1-sum2);

    return 0;

}
