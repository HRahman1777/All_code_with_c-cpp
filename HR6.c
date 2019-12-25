#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int x;
    float pos = 0,neg = 0,zer = 0;
    scanf("%d", &x);
    int arr[x];
    for(int arr_i = 0; arr_i < x; arr_i++)
    {
        scanf("%d",&arr[arr_i]);
        if(arr[arr_i]>0)
            pos++;
        else if(arr[arr_i]<0)
            neg++;
        else
            zer++;
    }
    printf("%.6f\n%.6f\n%.6f", (float)pos/x, (float)neg/x, (float)zer/x);

    return 0;
}
