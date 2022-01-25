#include<stdio.h>
int main()
{
    int i, j, num, nw, arr[5];
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);

    scanf("%d", &nw);
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
            arr[i] = nw;
    }
    for(i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    return 0;
}
