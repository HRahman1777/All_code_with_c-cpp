#include<stdio.h>
int main()
{
    int n, i, j, num;
    float avg1, avg2;
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        float sm = 0, cnt = 0;
        scanf("%d", &n);
        float arr[n];
        for(j = 0; j < n; j++)
        {
            scanf("%f", &arr[j]);
            sm = sm + arr[j];
        }
        avg1 = sm / n;
        for(j = 0; j < n; j++)
        {
            if(arr[j] > avg1)
            {
                cnt++;
            }
        }
        avg2 = (cnt*100)/n;
        printf("%.3f%%\n", avg2);
    }
    return 0;
}
