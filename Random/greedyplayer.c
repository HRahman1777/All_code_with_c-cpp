#include<stdio.h>
int main()
{
    int tc, i, j, num, cnt;
    scanf("%d", &tc);
    if(tc<=30)
    {
        for(i=0; i<tc; i++)
        {
            cnt = 0;
            scanf("%d", &num);
            if(num<=100)
            {
                int arr[num];
                for(j=0; j<num; j++)
                {
                    scanf("%d", &arr[j]);
                    if(arr[j]%2 == 0 && arr[j]>0)
                        cnt++;
                }
                printf("Case %d->%d\n", i+1, cnt);
            }
        }
    }
    return 0;
}
