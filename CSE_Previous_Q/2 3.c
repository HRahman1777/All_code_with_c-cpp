#include<stdio.h>

int main()
{
    int sum = 0, i, start, end;
    scanf("%d %d", &start, &end);
    for(i = start; i <= end; i++)
    {
        if(i%2 == 0)
        {
            sum += i;
        }
    }

    printf("%d",sum);

    return 0;
}
//Input:10 17
//Output:52
